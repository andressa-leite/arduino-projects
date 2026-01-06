// C++ code
//
#include <Servo.h>

Servo s1; //variável para controlar o servo motor
Servo s2;

void setup()
{
   Serial.begin(9600);
   s1.attach(3);
   s2.attach(4);
}

void loop()
{
  
  int valorLido = analogRead(A0);
  Serial.println(valorLido);
  if (valorLido > 0){
  	s1.write(180);
    s2.write(0);
  }else{
  	s1.write(90);
    s2.write(90);
    };
     
}