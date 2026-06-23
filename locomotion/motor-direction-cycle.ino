void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
delay(2000);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
delay(2000);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
delay(5000);

}
