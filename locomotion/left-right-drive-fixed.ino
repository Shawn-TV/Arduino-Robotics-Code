void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(1,INPUT);
pinMode(13,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5,HIGH);
digitalWrite(6,LOW);

digitalWrite(10,HIGH);
digitalWrite(11,LOW);
delay(10000);

}
