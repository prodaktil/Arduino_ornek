void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);



}

void loop() {

analogWrite(9,0);
analogWrite(10,255);
analogWrite(11,0);

}
