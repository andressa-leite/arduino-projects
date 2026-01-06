// C++ code
//
//#include <VarSpeedServo.h> //biblioteca que controla a velocidade do servo
//VarSpeedServo s1; //declaração
//s1.write(pos, 10, true); // (graus , velocidade, true ou false)

#include <Servo.h>

Servo s1; //variável para controlar o servo motor
int pos = 0; //posição inicial
byte pinosLed[] = {2,12,13}; //array 
int x;

void setup()
{
  Serial.begin(9600);
  s1.attach(4); //servo 
  pinMode(pinosLed[x], OUTPUT); //leds
  
  Serial.println("Pressione A para descer ou B para subir ");
  
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  s1.write(0);
  
}

void piscar(){
   digitalWrite(2,HIGH);
          delay(300);
          digitalWrite(2,LOW);
          delay(300);
          digitalWrite(2,HIGH); 
          delay(300);
          digitalWrite(2,LOW);  
          delay(300);
          digitalWrite(2,HIGH);
          delay(300);
          digitalWrite(2,LOW);
}



void loop() {
 
    char ls = Serial.read();
           	
    	if (ls == 'A' || ls == 'a' ){
          Serial.println("Descendo");
          digitalWrite(12,LOW);
          s1.write(45);
         	piscar();
          s1.write(90);
            piscar();
          s1.write(135);
          	piscar();
          s1.write(180);
          digitalWrite(13,HIGH);
          digitalWrite(12,LOW);
              
        }
  		if (ls == 'B' || ls == 'b' ){
          Serial.println("Subindo");
          digitalWrite(12,LOW);
          s1.write(180);
         	s1.write(135);
            piscar();
          s1.write(90);
          	piscar();
          s1.write(45);
          	piscar();
          s1.write(0);
          digitalWrite(12,HIGH);
          digitalWrite(13,LOW);
              
        }
}