void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
 pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(3)==HIGH)
{digitalWrite(5,HIGH);
  delay(1);
  digitalWrite(5,LOW);}
  else{
    digitalWrite(5,LOW);
    }
}
