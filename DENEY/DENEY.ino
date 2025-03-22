int a;
void setup() {
  pinMode(3,INPUT);
  pinMode(11,OUTPUT);
}
void loop() {
  if(digitalRead(3)==HIGH){
 digitalWrite(11,HIGH);
  }
  else{
   digitalWrite(11,LOW);
  }
}
