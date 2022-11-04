int ledPin =18;
int btn=26;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(btn,INPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
int btnState=digitalRead(btn);
Serial.println(btnState);
delay(10);

digitalWrite(ledPin,btnState);
  
}
