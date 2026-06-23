#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define kaiguan 12



void setup() {
  // put your setup code here, to run once:
  pinMode(12,INPUT);
  
    pinMode(2,OUTPUT);
      pinMode(3,OUTPUT);
        pinMode(4,OUTPUT);
          pinMode(5,OUTPUT);
            pinMode(6,OUTPUT);
              pinMode(7,OUTPUT);
                pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(12)==LOW){
  
    digitalWrite(A,HIGH);
        digitalWrite(B,HIGH);
            digitalWrite(C,HIGH);
                digitalWrite(D,HIGH); 
                  digitalWrite(E,LOW);
                    digitalWrite(F,LOW);   
                      digitalWrite(G,HIGH);
                        delay(30);}
                        if(digitalRead(12)==LOW){
      digitalWrite(A,LOW);
        digitalWrite(B,LOW);
            digitalWrite(C,HIGH);
                digitalWrite(D,LOW); 
                  digitalWrite(E,LOW);
                    digitalWrite(F,HIGH);   
                      digitalWrite(G,LOW);
                      delay(30);}
                      if(digitalRead(12)==LOW){
      digitalWrite(A,LOW);
        digitalWrite(B,LOW);
            digitalWrite(C,LOW);
                digitalWrite(D,LOW); 
                  digitalWrite(E,HIGH);
                    digitalWrite(F,HIGH);   
                      digitalWrite(G,LOW);
                      delay(30);}
                      if(digitalRead(12)==LOW){
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
            digitalWrite(C,LOW);
                digitalWrite(D,HIGH); 
                  digitalWrite(E,HIGH);
                    digitalWrite(F,LOW);   
                      digitalWrite(G,LOW);
                      delay(30);}
                      if(digitalRead(12)==LOW){
         digitalWrite(A,LOW);
        digitalWrite(B,HIGH);
            digitalWrite(C,LOW);
                digitalWrite(D,LOW); 
                  digitalWrite(E,HIGH);
                    digitalWrite(F,LOW);   
                      digitalWrite(G,LOW);
                      delay(30);}
                      if(digitalRead(12)==LOW){
            digitalWrite(A,LOW);
        digitalWrite(B,HIGH);
            digitalWrite(C,LOW);
                digitalWrite(D,LOW); 
                  digitalWrite(E,LOW);
                    digitalWrite(F,LOW);   
                      digitalWrite(G,LOW);
                      delay(30);}
                      if(digitalRead(12)==LOW){
            digitalWrite(A,LOW);
        digitalWrite(B,LOW);
            digitalWrite(C,LOW);
                digitalWrite(D,HIGH); 
                  digitalWrite(E,HIGH);
                    digitalWrite(F,HIGH);   
                      digitalWrite(G,HIGH);
                      delay(30);}
                      if(digitalRead(12)==LOW){
                      digitalWrite(A,LOW);
        digitalWrite(B,LOW);
            digitalWrite(C,LOW);
                digitalWrite(D,LOW); 
                  digitalWrite(E,LOW);
                    digitalWrite(F,LOW);   
                      digitalWrite(G,LOW);
                      delay(30);}
                      if(digitalRead(12)==LOW){
                       digitalWrite(A,LOW);
                       digitalWrite(B,LOW);
            digitalWrite(C,LOW);
                digitalWrite(D,HIGH); 
                  digitalWrite(E,HIGH);
                    digitalWrite(F,LOW);   
                      digitalWrite(G,LOW);
                      delay(30);}
                
                      
}
