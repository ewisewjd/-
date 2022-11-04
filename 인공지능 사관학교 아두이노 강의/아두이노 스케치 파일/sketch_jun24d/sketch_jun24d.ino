#include<Servo.h>
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, OUTPUT);
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

  int sensor=analogRead(A0);
 
  int mapvalue= map(sensor, 0,1023,0,179);
  
  myServo.write(mapvalue);
  delay(10);
  Serial.println(mapvalue);


}
