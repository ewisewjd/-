#include <LiquidCrystal.h>

LiquidCrystal lcd(7,8,9,10,11,12);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue= analogRead(A0);
  lcd.scrollDisplayRight();
  lcd.clear();
  lcd.print("brightness");
  lcd.setCursor(0,1);
  lcd.print(sensorValue);
  delay(300);
}
