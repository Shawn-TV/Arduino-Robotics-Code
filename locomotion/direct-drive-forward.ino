
const int INL1=1;
const int INL2=2;

const int INR3=3;
const int INR4=4;

void setup() {
  // put your setup code here, to run once:

pinMode(INR3, OUTPUT);
pinMode(INR4, OUTPUT);
pinMode(INL1, OUTPUT);
pinMode(INL2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(INL1,HIGH);
digitalWrite(INL2,LOW);
digitalWrite(INR3,HIGH);
digitalWrite(INR4,LOW);

}
