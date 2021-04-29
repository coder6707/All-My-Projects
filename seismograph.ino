/*This code will be able to replicate a real life seismograph if the servo motor is attached to barrel covered with a graph under a pendulum with pen under it as the servo will move 
the barrel and hence if we vibrate the model , the pen will make a whole vibration chart on the graph . The servo will be needed to conected to an arduino    */
#include <Servo.h>

Servo myservo;  
int pos = 0;    

void setup()
{
  myservo.attach(9);  
}
void loop() 
{
  for (pos = 0; pos <= 180; pos += 1) 
  { 
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) 
  {
    myservo.write(pos);              
    delay(15);                      
   }
}
