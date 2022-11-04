#include <Servo.h>

#include<Servo.h>//Servo라이브러리 호출

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);//pinMode
  
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(0);//write(angle) angle:0~179
  delay(1000);
  myServo.write(179);
  delay(2000);

  //문제정의
  //1.servo.h 라이브러리 추가하기
  //2.myservo 만들기
  //3.setup()에 attach함수를 활용해 9번핀 servo motor용으로 설정;
  //3-2
  //4.distance가 20이하일때 0도였던 각도가 90도가 되게 해주세요
}
