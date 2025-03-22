/*
Lezzetli Robot Tarifleri
https://lezzetlirobottarifleri.com/joystick-modulu-arduino-ile-nasil-kullanilir
*/

const int x_ekseni = A1;
const int y_ekseni = A0;

int x;
int y;

void setup() {
Serial.begin(9600);
}

void loop() {
  x = analogRead(x_ekseni);
  y = analogRead(y_ekseni);

  Serial.print("x durumu = ");
  Serial.println(x);
  Serial.print("y durumu = ");
  Serial.println(y);
  Serial.println("---------------------------");
  delay(300);
}
