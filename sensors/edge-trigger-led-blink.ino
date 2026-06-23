void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
 pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)==HIGH){
  digitalWrite(3,HIGH);
   delay(1000);
   digitalWrite(3,LOW);
   delay(1000);
}
}
