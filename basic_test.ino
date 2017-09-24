/* Mini Photocell (FIT0180) [S001] : http://rdiot.tistory.com/67 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004
 
int sensorPin = A0;
 
void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");
}
 
void loop()
{
  int rate = analogRead(sensorPin);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("S001:FIT0180");
  lcd.setCursor(0,1);
  lcd.print("CDS Value=" + (String)rate);
 
  delay(200);
}
