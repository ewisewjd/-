void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);
pinMode(4,INPUT);
pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn1= digitalRead(7);
  int btn2= digitalRead(6);
  int btn3= digitalRead(5);
  int btn4= digitalRead(4);
  int btn5= digitalRead(3);

if (btn1 or btn2 or btn3 or btn4 or btn5==1){
  if (btn1==1){
    tone(8,262,500);

  }
 
   if (btn2==1){
    tone(8,294,500);

  }
  if (btn3==1){
    tone(8,330,500);
  }

  if (btn4==1){
    tone(8,349,500);
  }
  if (btn5==1){
    tone(8,392,500);
  }
  
else{
    tone(8,0,500);

}

delay(1000);

}
}
