#include <Servo.h>   /* So this part just sets up the servo an its position */
Servo myservo; 
int pos = 0;
void setup() 
{
  Serial.begin(9600);            /* This part tells the arduino micro controller where are the servo and ultrasonic sensor present so that they can get power */
  pinMode(11, OUTPUT);
  pinMode(12, INPUT); 
  myservo.attach(9);
}

void loop() 
{
  long ak, mi; 
  digitalWrite(11, HIGH);      /*This part as usual calculates the distance of a thing using the ultrasonic sensor, and it is throughly explained by me in obstacle */
  delayMicroseconds(15);       /*avoider code */
  digitalWrite(11, LOW);
  ak = pulseIn(12, HIGH);
  mi = ak / 2 / 29.1;

  if (mi < 20)                 /* Now if the distance of the radar from an object is more than 20, the radar wont change it position/the servo won't change it position*/
  {
    myservo.write(0);             
    delay(10000);       
  }

  else if (mi > 20)             /* Now if the distance of the radar from an object is less than 20, the radar/servo motor will rotate 90 degrees*/
  {
    myservo.write(90);             
      
         
  }

}
