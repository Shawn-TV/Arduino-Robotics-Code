
const int INL1=4;
const int INL2=5;

const int INR3=7;
const int INR4=6;

void setup() {
  // put your setup code here, to run once:

pinMode(INR3.OUTPUT);
pinMode(INR4.OUTPUT);
pinMode(INL1.OUTPUT);
pinMode(INL2.OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(INL1,HIGH);
digitalWrite(INL2,LOW);

digitalWrite(INR3,HIGH);
digitalWrite(INR4,LOW);

}
