int d = 0; // 262
int re = 0; // 294
int mi = 0; // 330
int fa = 0; // 349


void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  if(digitalRead(3)==HIGH){
  tone(11,262);
  }
  else
  digitalWrite(11,LOW);
}
