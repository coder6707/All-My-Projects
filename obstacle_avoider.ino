
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
  long ak, mi;                                   
  digitalWrite(11, HIGH);                      /* This part is using the variables ak and mi while ak in the input given by the */
  delayMicroseconds(15);
  digitalWrite(11, LOW);
  ak = pulseIn(12, HIGH);
  mi = ak / 2 / 29.1;

  if (mi < 7)
  {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    analogWrite(10, 200);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    analogWrite(5, 200);
  }

   else if (mi > 7)
  {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    analogWrite(10, 200);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    analogWrite(5, 200);
  }

}
