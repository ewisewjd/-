
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // put your setup code here, to run once:

  lcd.begin(16, 2);
  lcd.print("Today is monday!!");
}

int number=0;

void loop() {
  // put your main code here, to run repeatedly:
  lcd.scrollDisplayRight();
  delay(200);
  //lcd.setCursor(0,1);
  
 // lcd.print("seconds : ");
  //lcd.setCursor(10,1);
 // lcd.print(number);
  //delay(1000);
  //number++;

}
