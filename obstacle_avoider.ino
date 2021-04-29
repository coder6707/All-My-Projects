
void setup()
{
  Serial.begin(9600);      /* This part just tells the arduino which all out pins will be used in the robot, so that the arduino gives power to just these pins*/
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, INPUT);
}

void loop()
{
  long ak, mi;                                   
  digitalWrite(11, HIGH);     /* This part is using the variables "ak" and "mi" while "ak" in the input given by the ultrasonic sensor and "mi" is the distance between */
  delayMicroseconds(15);      /* the obstacle and the bot and is calculated useing "ak" */
  digitalWrite(11, LOW);
  ak = pulseIn(12, HIGH);
  mi = ak / 2 / 29.1;

  if (mi < 7)
  {
    digitalWrite(9, HIGH);      /* Here I have just given a certain distance, which is 7, and if the variable "mi" is lower than 7 and that means that the bot is close */
    digitalWrite(8, LOW);       /* to an obstacle and hence, it will stop 1 motor from rotating and the motor connected to 9 & 8 will go on roation forwards at speed of */
    analogWrite(10, 200);       /*of 200 and hence the bot will be able to make a turn and hence it wouldnt crash into the obstacle*/
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    analogWrite(5, 200);
  }

   else if (mi > 7)
  {
    digitalWrite(9, HIGH);    /* Here I have just given a certain distance, which is 7, and if the variable "mi" is high than 7 and that means that the bot is far from */
    digitalWrite(8, LOW);     /* an obstacle hence it puts both motors on 200 speed and goes forward*/
    analogWrite(10, 200); 
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    analogWrite(5, 200);
  }

}
