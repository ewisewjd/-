
#include<Servo.h>
Servo myServo;

int trig=2;
int echo=3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(9);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   myServo.write(0);
   
  //문제정의
  //1. trig핀을 통해서 초음파를 쏜다.
  digitalWrite(trig, HIGH);
  //2. 10ms후에 초음파를 출력하지 않는다.
  delay(10);
  digitalWrite(trig,LOW);
   
  //3. echo에서 초음파가 오는 순간 echo의 상태가 변하는 을 측정한다.
  int duration= pulseIn(echo, HIGH);
  //4.시간을 2로 나눈다(갔다가 오는 시간
  duration=duration/2; 
  //5.거리- 속력-시간 공식을 이용해서 거리를 측정한다.
  int distance= duration/29.1;

  if (distance>=5){
    if (distance <300){
      Serial.print("거리:");  
      Serial.print(distance);
      Serial.println("cm");
      delay(300);
    }
  }
  //문제정의
  //거리가 10센치 이하가 되면 
  //피에조 부조를 울려주세요
 if (distance<=5){
  tone(8,330,200);
  delay(300);
 } 
 
  
}
