
#include <IRremote.h>

IRrecv kumanda(8);

decode_results son;

#define D 0xFFFFFFFF
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

void setup() 
{
    Serial.begin(9600);
    kumanda.enableIRIn();
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    
    
}

void loop() 
{
  if (kumanda.decode(&son)){
      Serial.println(son.value, HEX);
        if(son.value == BUTON1){  
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
        }
        if(son.value == BUTON2){  
          digitalWrite(2, LOW);
          digitalWrite(3, HIGH);
        }
       if(son.value == BUTON3){  
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
        }
        if(son.value == BUTON4){  
          digitalWrite(4, HIGH);
          digitalWrite(5, LOW);
        }
        if(son.value == BUTON5){  
          digitalWrite(4, LOW);
          digitalWrite(5, HIGH);
        }
       if(son.value == BUTON6){  
          digitalWrite(4, LOW);
          digitalWrite(5, LOW);
        }
        if(son.value == VOL1){  
          analogWrite(9 , 60);
          analogWrite(10 , 60);
        }
        if(son.value == BUTON0){  
          analogWrite(9 , 120);
          analogWrite(10 , 120);
        }
        if(son.value == BUTON100){ 
          analogWrite(9 , 175);
          analogWrite(10 , 175);
        }
       if(son.value == BUTON200){  
         analogWrite(9 , 255);
          analogWrite(10 , 255);
        }
       
        if(son.value == BUTON8){  
          digitalWrite(2, LOW);
          digitalWrite(3, HIGH);
           if (kumanda.decode(&son)){
            Serial.println(son.value, HEX);
            delay(1000);
            while(son.value == D){
             digitalWrite(2, LOW);
             digitalWrite(3, HIGH);
            delay(1000);
            }}
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
        }
        
        
     kumanda.resume();
  }
}
