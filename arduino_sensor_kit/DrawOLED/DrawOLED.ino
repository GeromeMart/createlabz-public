#include <U8g2lib.h>

// XBM Byte Array
static const char myXBM[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0x14, 0x05, 0xA2, 0x08, 0x82, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x60, 0x08, 0x51, 0x14, 
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x88, 
  0x08, 0x11, 0x88, 0x88, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x49, 0x85, 0x18, 0x08, 0x44, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x20, 0x81, 0x91, 0x7C, 0x3B, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x45, 0x08, 0x08, 
  0x21, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x10, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D, 0x04, 0x81, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEE, 0xEB, 
  0xFB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xB8, 0xBE, 0x7D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x75, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x3C, 0x00, 0x00, 0x18, 0x24, 0x48, 
  0x20, 0xB9, 0x6F, 0x00, 0x00, 0x40, 0x44, 0xAA, 0x95, 0xF6, 0x7B, 0x00, 
  0x00, 0x80, 0x00, 0x01, 0x7E, 0xDE, 0xEA, 0x00, 0x00, 0xF8, 0x7F, 0xFF, 
  0xEB, 0xAD, 0x7E, 0x00, 0x00, 0x14, 0xA5, 0x48, 0x80, 0x37, 0x7F, 0x00, 
  0xA0, 0x05, 0xC0, 0x55, 0x7D, 0xF3, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x37, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1F, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x11, 0x08, 0x82, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
  0x44, 0xA1, 0x28, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1E, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1E, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0C, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x1E, 0x00, 0x00, 
  0x0E, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x08, 0x08, 0xC0, 0xC0, 0x01, 
  0x06, 0x1C, 0x80, 0x09, 0xDE, 0xC1, 0x39, 0x00, 0x00, 0x06, 0xC0, 0x1E, 
  0x3F, 0xF8, 0xE3, 0x87, 0x1F, 0x1C, 0xE0, 0x1F, 0xFE, 0xC7, 0x3F, 0x00, 
  0x00, 0x06, 0xC0, 0x83, 0x61, 0x00, 0xC7, 0xC0, 0x30, 0x0E, 0xC0, 0x3F, 
  0xBC, 0x87, 0x3F, 0x00, 0x00, 0x06, 0xC0, 0x81, 0xC1, 0x00, 0xC6, 0x60, 
  0x30, 0x1E, 0x00, 0x38, 0x1C, 0x0F, 0x3C, 0x00, 0x00, 0x03, 0xC0, 0xC0, 
  0xC0, 0x00, 0xC2, 0x60, 0x20, 0x0E, 0x00, 0x38, 0x1E, 0x0E, 0x1C, 0x00, 
  0x00, 0x06, 0x80, 0xC0, 0xFF, 0xA0, 0x83, 0xE0, 0x3F, 0x1E, 0xC0, 0x7F, 
  0x0E, 0x0E, 0x0E, 0x00, 0x00, 0x02, 0xC0, 0xC0, 0x5A, 0x58, 0xC6, 0x60, 
  0x37, 0x0C, 0xE0, 0x37, 0x1E, 0x0E, 0x07, 0x00, 0x00, 0x06, 0xC0, 0xC0, 
  0x00, 0x0C, 0xC6, 0x60, 0x00, 0x1E, 0xF0, 0x78, 0x1E, 0x0E, 0x07, 0x00, 
  0x00, 0x0C, 0x80, 0x80, 0x00, 0x0C, 0x86, 0x60, 0x00, 0x1C, 0x70, 0x38, 
  0x1C, 0xCF, 0x03, 0x00, 0x00, 0x1C, 0xC0, 0x80, 0x01, 0x0C, 0xC3, 0xC0, 
  0x00, 0x7C, 0xF7, 0x3C, 0x7C, 0xCF, 0x1F, 0x00, 0x00, 0xF8, 0xC7, 0x00, 
  0x6B, 0xCC, 0x85, 0xC5, 0x37, 0xFE, 0xE3, 0x3F, 0xFE, 0xC7, 0x7F, 0x00, 
  0x00, 0xE0, 0x45, 0x00, 0x7E, 0xF8, 0x04, 0x07, 0x1E, 0x6A, 0xC1, 0x13, 
  0xC8, 0x83, 0x5B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, };

// Initialize OLED display
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  // put your setup code here, to run once:
  // Initialize OLED
  u8g2.begin();
  // Set orientation of the OLED display (true to rotate to 180 degrees)
  u8g2.setFlipMode(true);
}

void loop() {
  // put your main code here, to run repeatedly:
  u8g2.clearBuffer(); // Clear all pixels in memory frame buffer
  u8g2.drawXBMP(0,0,128,64,myXBM); // Draw XMP file at X= 0, Y = 0
  u8g2.sendBuffer(); // Send memory frame buffer to OLED
  delay(1000);
}