const int feng=2;

void setup() {
  // put your setup code here, to run once:
 pinMode(2,INPUT);
  pinMode(3,INPUT);
   pinMode(4,INPUT);
    pinMode(5,INPUT);
     pinMode(6,INPUT);
      pinMode(7,INPUT);
       pinMode(8,INPUT);
        pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(2)==HIGH){
  tone(12,441,10);
 }
 else
 {
  digitalWrite(12,LOW);
  }
     if(digitalRead(3)==HIGH){
     tone(12,495,10);
    }
    else
    {
     digitalWrite(12,LOW);
     }
    if(digitalRead(4)==HIGH){
  tone(12,262,10);
 }
 else
 {
  digitalWrite(12,LOW);
  }
     if(digitalRead(5)==HIGH){
  tone(12,294,10);
 }
 else
 {
  digitalWrite(12,LOW);
  }
  if(digitalRead(6)==HIGH){
  tone(12,330,10);
 }
 else
 {
  digitalWrite(12,LOW);
  }
  if(digitalRead(7)==HIGH){
  tone(12,353,10);
 }
 else
 {
  digitalWrite(12,LOW);
  }
  if(digitalRead(8)==HIGH){
  tone(12,393,10);
 }
 else
 {
  digitalWrite(12,LOW);
  }
}
