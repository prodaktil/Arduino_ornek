#include <IRremote.h>
IRrecv irrecv(2);
decode_results results;
#define CH1 0xFFA25D
#define CH 0xFF629D
#define CH2 0xFFE21D
#define PREV 0xFF22DD
#define NEXT 0xFF02FD
#define PLAYPAUSE 0xFFC23D
#define VOL1 0xFFE01F
#define VOL2 0xFFA857
#define EQ 0xFF906F
#define BUTON0 0xFF6897
#define BUTON100 0xFF9867
#define BUTON200 0xFFB04F
#define BUTON1 0xFF30CF
#define BUTON2 0xFF18E7
#define BUTON3 0xFF7A85
#define BUTON4 0xFF10EF
#define BUTON5 0xFF38C7
#define BUTON6 0xFF5AA5
#define BUTON7 0xFF42BD
#define BUTON8 0xFF4AB5
#define BUTON9 0xFF52AD
void setup() {
 pinMode(13,OUTPUT);
 Serial.begin(9600);
 irrecv.enableIRIn(); 
}
void loop() {
if (irrecv.decode(&results))
{
 Serial.println(results.value,HEX);
 if(results.value == BUTON0){
  digitalWrite(13, !digitalRead(13));
 }
irrecv.resume();
}
}
