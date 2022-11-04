
#include<Servo.h>
Servo myServo;

int trig = 2;
int echo = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(8, OUTPUT);
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

  //문제정의
  //1. trig핀을 통해서 초음파를 쏜다.
  digitalWrite(trig, HIGH);
  //2. 10ms후에 초음파를 출력하지 않는다.
  delay(10);
  digitalWrite(trig, LOW);

  //3. echo에서 초음파가 오는 순간 echo의 상태가 변하는 을 측정한다.
  int duration = pulseIn(echo, HIGH);
  //4.시간을 2로 나눈다(갔다가 오는 시간
  duration = duration / 2;
  //5.거리- 속력-시간 공식을 이용해서 거리를 측정한다.
  int distance = duration / 29.1;


  if (distance <= 20) {
    myServo.write(90);
    delay(1000);
  }
  else {
    myServo.write(0);
    delay(1000);
  }
  Serial.println(distance);


}
