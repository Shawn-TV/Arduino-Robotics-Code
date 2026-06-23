
const int INL1=4;
const int INL2=5;
const int E1=6;
const int INR3=7;
const int INR4=4;
const int E2=9;
void setup() {
  // put your setup code here, to run once:

pinMode(INR3.OUTPUT);
pinMode(INR4.OUTPUT);
pinMode(INL1.OUTPUT);
pinMode(INL2.OUTPUT);
pinMode(E1.OUTPUT);
pinMode(E2.OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(INL1,HIGH);
digitalWrite(INL2,LOW);
analogWrite(E1,100);
digitalWrite(INR3,HIGH);
digitalWrite(INR4,LOW);
analogWrite(E2,100);
}
