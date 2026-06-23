
#include <Servo.h>
Servo AAA;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position
const int INL1=1;
const int INL2=2;
const int INR3=3;
const int INR4=4;
const int INRD=6;
const int Sensor3=12;
const int Sensor4=13;
float cm; //距离变量  
float temp; //临时变量   
void setup() 
{
  pinMode(INR3,OUTPUT);
  pinMode(INR4,OUTPUT);
  pinMode(INL1,OUTPUT);
AAA.attach(12);
   pinMode(INL2,OUTPUT);
  
  
  Serial.begin(9600);
  pinMode(Sensor3,INPUT);
  pinMode(Sensor4,INPUT);
}

void loop() 
{  
     if ( digitalRead(Sensor3)==HIGH)
    {
     digitalWrite(INL1,HIGH);
     digitalWrite(INL2,HIGH);
     digitalWrite(INR3,HIGH);
     digitalWrite(INR4,LOW);
      }      
  else if ( digitalRead(Sensor3)==LOW)
    
   {digitalWrite(INL1,HIGH); 
AAA.attach(6);
   digitalWrite(INL2,LOW);
   digitalWrite(INR3,HIGH);
   digitalWrite(INR4,HIGH);   

   

   }
 
}
