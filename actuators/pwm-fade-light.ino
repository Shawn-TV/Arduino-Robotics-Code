int a=0;

void setup() {
  // put your setup code here, to run once:

 pinMode(11,OUTPUT);
  pinMode(2,INPUT);
   pinMode(3,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(2)==HIGH)
{
     a=a+5;


     if(a>=255)
{
a=255;
}
 analogWrite(11,a);
   delay (300);
}

if(digitalRead(3)==HIGH)
{
      a=a-5;
     if(a<=0)
     {
      a=0;
     }  
   analogWrite(11,a);
   delay (300);
   }
  else
  {
    analogWrite(11,a);
  }
  }
  



  




