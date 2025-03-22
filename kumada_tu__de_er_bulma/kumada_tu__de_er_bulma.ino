#include <IRremote.h>

IRrecv kumanda(8);

decode_results son;


void setup() 
{
    Serial.begin(9600);
    kumanda.enableIRIn();
    
}

void loop() 
{
  if (kumanda.decode(&son)){
      Serial.println(son.value, HEX);
     kumanda.resume();
  }
}
