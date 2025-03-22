long x;
long a;
void setup() {
   pinMode(7,OUTPUT);
   pinMode(6,INPUT);
   pinMode(8,OUTPUT);
   Serial.begin(9600);
   
}

void loop() {
  digitalWrite(7,LOW);
  delayMicroseconds(5);
   digitalWrite(7,LOW);
   delayMicroseconds(10);
  digitalWrite(7,LOW);
  x = pulseIn(6, HIGH);
  a = x/58.2;
  Serial.println(a);
  delay(1000);
}
