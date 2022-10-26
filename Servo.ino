#include <Servo.h>

Servo myservo;


int pos = 0;

void setup() {
  
myservo.attach(9); 

}

void loop() {
 
    myservo.write(pos=20);              
    delay(2000);                       
  
    myservo.write(pos=80);            
    delay(2000);                      
  
   myservo.write(pos=160);          
   delay(2000);  


   myservo.write(pos=80);            
   delay(2000);                
 }
