
Moves servo from 0 to 180 and back 
created by: Ahmad El-khawaldeh
created on: oct 17

#include <Servo.h>
Servo Servo;
int angle= 10;

void setup() {
  Servo.attach(8);
  Servo.write(angle);
}
void loop()
{
  for(angle =10; angle< 180; angle++)
 {
   Servo.write(angle);
   delay(15);
 }
 
 
   for(angle = 180; angle > 10; angle--)
   {
     Servo.write(angle);
     delay(15);
   }
 }
 

