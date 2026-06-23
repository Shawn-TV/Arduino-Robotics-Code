int R1=3;
int R2=9;

int G1=4;
int G2=10;

int B1=6;
int B2=11;




void setup() {
  // put your setup code here, to run once:
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
 
 
}
void color(int red,int green,int blue)
{analogWrite(R1,red);
analogWrite(B1,green);
analogWrite(G1,blue);}

void color1(int red,int green,int blue)
{analogWrite(R2,red);
analogWrite(B2,green);
analogWrite(G2,blue);}


void loop() {
  // put your main code here, to run repeatedly:


  color(0,255,255);
  color1(0,255,0);
  delay (1000);
  
  color(0,0,255);
  color1(255,255,0);
  delay (1000);

  color(255,0,255);
  color1(255,0,255);
  delay (1000);

  color(255,0,255);
  color1(255,0,255);
  delay (1000);
  
  color(255,255,0);
  color1(0,0,255);
  delay (1000);

  color(0,255,0);
  color1(0,255,255);
  delay (1000);
}
