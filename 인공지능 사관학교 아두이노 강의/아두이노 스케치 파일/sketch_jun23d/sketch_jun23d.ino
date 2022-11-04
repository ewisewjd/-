void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int value1=analogRead(A0);
int value2=analogRead(A1);
int value3=analogRead(A2);

int cv1=map(value1,0, 1023,0,255);
int cv2=map(value2,0, 1023,0,255);
int cv3=map(value3,0, 1023,0,255);

analogWrite(9,cv1);
analogWrite(10,cv2);
analogWrite(11,cv3);

}
