int  l, r, lm, rm, lw, rw, lb, rb;
int enA = 10;
int in1 = 9;
int in2 = 8;
int enB = 5;
int in3 = 7;
int in4 = 6;
void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(12, OUTPUT);

  digitalWrite(12, HIGH);
  delay(3000);
  lb = analogRead(A0);
  rb = analogRead(A1);
  digitalWrite(12, LOW);

  delay(2000);

  digitalWrite(12, HIGH);
  delay(3000);
  lw = analogRead(A0);
  rw = analogRead(A1);
  digitalWrite(12, LOW);


  delay(2000);

  lm = (lw + lb) / 2;
  rm = (rw + rb) / 2;

}

void loop()
{
  l = analogRead(A0);
  r = analogRead(A1);

  if (l > lm  &&  r > rm)
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 200);
  }


  if (l > lm  &&  r < rm)
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enB, 0);
  }


  if (l < lm  &&  r > rm)
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 0);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 0);
  }


  if(l<lm  &&  r<rm)
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2,HIGH);
    analogWrite(enA,200);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
    analogWrite(enB,200);
  }
}
