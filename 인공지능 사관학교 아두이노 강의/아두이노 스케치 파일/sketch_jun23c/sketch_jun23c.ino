void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int signal1= analogRead(A0);
  // map(읽어온값, 최소값, 최대값, 변하고 싶은 최소값, 변하고 싶은 최대값)
  int ch =map(signal1,0,1023, 0,255);
  analogWrite(9,ch);
  Serial.println(ch);
  
}
