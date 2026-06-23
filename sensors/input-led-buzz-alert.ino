int sos=0;
const int feng=2;

void setup() {
  // put your setup code here, to run once:pinMode(8,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(feng,INPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
sos=digitalRead(feng);
if(sos==HIGH){
  digitalWrite(12,HIGH);
   digitalWrite(13,HIGH);
   delay(1);
   digitalWrite(13,LOW);
  }
  else{
    
    digitalWrite(12,LOW);
   digitalWrite(13,LOW);
    
    
    }
}
