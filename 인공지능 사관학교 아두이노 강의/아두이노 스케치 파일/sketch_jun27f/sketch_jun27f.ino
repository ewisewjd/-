void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  if (Serial.available()){
    int a =Serial.read();
    int b= Serial.read();
    Serial.println(a+b);
  }

}
