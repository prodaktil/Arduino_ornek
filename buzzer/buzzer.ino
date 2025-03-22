
int x;
void setup() {
 pinMode(13,OUTPUT);
Serial.begin(9600);
}
void loop() {
  x = analogRead(A0);
  Serial.println(x);
   digitalWrite(13,HIGH);
 delay(x);
 digitalWrite(13,
  
