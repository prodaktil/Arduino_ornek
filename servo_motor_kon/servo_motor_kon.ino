#include <Servo.h>
Servo s;
int x;
int a;
void setup() {
s.attach(3);
Serial.begin(9600);
}
void loop() {
  x = analogRead(A0);
  Serial.println(a);
  a=map(x , 0, 1023, 0, 180);
  s.write(a);
 delay(15);
  }
  
