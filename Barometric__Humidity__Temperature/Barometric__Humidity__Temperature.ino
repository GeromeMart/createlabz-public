#include <SFE_BMP180.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SimpleDHT.h>

SFE_BMP180 pressure;
LiquidCrystal_I2C lcd(0x27, 20, 4);
int pinDHT11 = 2;
SimpleDHT11 dht11(pinDHT11);

#define ALTITUDE 1655.0 // Altitude of SparkFun's HQ in Boulder, CO. in meters

void setup()
{
  Serial.begin(9600);
  Serial.println("REBOOT");
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(6, 0);
  lcd.print("WELCOME");
  lcd.setCursor(9, 1);
  lcd.print("TO");
  lcd.setCursor(5, 2);
  lcd.print("CREATELABZ");
  delay(5000);
  lcd.clear();

  if (pressure.begin())
    Serial.println("BMP180 init success");
  else
  {

    Serial.println("BMP180 init fail\n\n");
    lcd.setCursor(0, 0);
    lcd.print("Check BMP180");
    while(1); // Pause forever.
  }
}

void loop()
{
  lcd.clear();
  char status;
  double T,P,p0,a;
  
  byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;
  // error exist maybe because of lost connection or module failure
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); 
    Serial.print(SimpleDHTErrCode(err));
    Serial.print(","); 
    Serial.println(SimpleDHTErrDuration(err));
    lcd.setCursor(0, 1);
    lcd.print("Hum:  err"); 
    delay(1000);
    return;
  }
  lcd.setCursor(0, 1);
  lcd.print("Hum:  ");
  lcd.print((int)humidity);
  lcd.print(" %");
  Serial.print("Sample OK: ");
  Serial.print("Humidity: "); 
  Serial.print((int)humidity); 
  Serial.println(" %");
  
  status = pressure.startTemperature();
  if (status != 0)
  {
    delay(status);
    status = pressure.getTemperature(T);
    if (status != 0)
    {
      // Print out the measurement:
      lcd.setCursor(0, 0);
      lcd.print("Temp: ");
      lcd.print(T,2);
      lcd.print("C; ");
      lcd.print((9.0/5.0)*T+32.0,2);
      lcd.print("F");
      Serial.print("temperature: ");
      Serial.print(T,2);
      Serial.print(" deg C, ");
      Serial.print((9.0/5.0)*T+32.0,2);
      Serial.println(" deg F");
      
      // Start a pressure measurement:
      // The parameter is the oversampling setting, from 0 to 3 (highest res, longest wait).
      // If request is successful, the number of ms to wait is returned.
      // If request is unsuccessful, 0 is returned.

      status = pressure.startPressure(3);
      if (status != 0)
      {
        delay(status);

        // Retrieve the completed pressure measurement:
        // Note that the measurement is stored in the variable P.
        // Note also that the function requires the previous temperature measurement (T).
        // (If temperature is stable, you can do one temperature measurement for a number of pressure measurements.)
        // Function returns 1 if successful, 0 if failure.

        status = pressure.getPressure(P,T);
        if (status != 0)
        {
          lcd.setCursor(0, 2);
          lcd.print("Abs:  ");
          lcd.print(P,2);
          lcd.print(" mB");
          Serial.print("absolute pressure: ");
          Serial.print(P,2);
          Serial.println(" mB");

          // The pressure sensor returns abolute pressure, which varies with altitude.
          // To remove the effects of altitude, use the sealevel function and your current altitude.
          // This number is commonly used in weather reports.
          // Parameters: P = absolute pressure in mb, ALTITUDE = current altitude in m.
          // Result: p0 = sea-level compensated pressure in mb

          p0 = pressure.sealevel(P,ALTITUDE); // we're at 1655 meters (Boulder, CO)
          lcd.setCursor(0, 3);
          lcd.print("Rel:  ");
          lcd.print(p0,2);
          lcd.print(" mB");
          Serial.print("relative (sea-level) pressure: ");
          Serial.print(p0,2);
          Serial.println(" mB");
        }
        else Serial.println("error retrieving pressure measurement\n");
      }
      else Serial.println("error starting pressure measurement\n");
    }
    else Serial.println("error retrieving temperature measurement\n");
  }
  else Serial.println("error starting temperature measurement\n");

  delay(2000);

}
