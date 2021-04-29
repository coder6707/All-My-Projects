void setup()
{
  Serial.begin(9600);
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
  long ak, vivi;
  digitalWrite(11, HIGH);
  delayMicroseconds(15);
  digitalWrite(11, LOW);
  ak = pulseIn(12, HIGH);
  vivi = ak / 2 / 29.1;

  if (vivi < 7)
  {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    analogWrite(10, 200);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    analogWrite(5, 200);
  }

   else if (vivi > 7)
  {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    analogWrite(10, 200);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    analogWrite(5, 200);
  }

}
