#include <Servo.h>
Servo myservo; 
int pos = 0;
void setup() 
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(12, INPUT); 
  myservo.attach(9);
}

void loop() 
{
  long ak, vivi;
  digitalWrite(11, HIGH);
  delayMicroseconds(15);
  digitalWrite(11, LOW);
  ak = pulseIn(12, HIGH);
  vivi = ak / 2 / 29.1;

  if (vivi < 20)
  {
    myservo.write(0);             
    delay(10000);       
  }

  else if (vivi > 20)
  {
    myservo.write(90);             
      
         
  }

}
