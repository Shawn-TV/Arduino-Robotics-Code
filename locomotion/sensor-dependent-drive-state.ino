const int OUT1=5;
const int OUT2=6;
const int ENA=7;
const int OUT3=10;
const int OUT4=9;
const int ENB=8;
const int DO=2;


void setup() {
  // put your setup code here, to run once:
pinMode(OUT3, OUTPUT);
pinMode(OUT4, OUTPUT);
pinMode(OUT1, OUTPUT);
pinMode(OUT2, OUTPUT);
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
pinMode(DO, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(DO)==HIGH)
{
  digitalWrite(OUT1,LOW);
digitalWrite(OUT2,LOW);
analogWrite(ENA,100);
  digitalWrite(OUT3,HIGH);
digitalWrite(OUT4,LOW);
analogWrite(ENB,100);
  }

  if (digitalRead(DO)==LOW)
{
  digitalWrite(OUT1,HIGH);
digitalWrite(OUT2,LOW);
analogWrite(ENA,100);
  digitalWrite(OUT3,LOW);
digitalWrite(OUT4,LOW);
analogWrite(ENB,100);
  }
  
}
