int ledPin=18;
int ledPin2=19;
int ledPin3=23;
void setup() {
  // put your setup code here, to run once:
ledcSetup(0,5000,10);
ledcAttachPin(ledPin,0);
ledcAttachPin(ledPin2,0);
ledcAttachPin(ledPin3,0);
}

void loop() {
  // put your main code here, to run repeatedly:
ledcWrite(0,0);
delay(1000);
ledcWrite(0,512);
delay(1000);
ledcWrite(0,1023);
delay(1000);
}
