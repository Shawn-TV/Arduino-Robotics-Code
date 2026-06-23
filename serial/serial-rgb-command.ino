int aaaaaa;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
aaaaaa=Serial.read();
if(aaaaaa=='r')
{digitalWrite(9,HIGH);
delay(1000);
}

if(aaaaaa=='g')
{digitalWrite(11,HIGH);
delay(1000);
}

if(aaaaaa=='b')
{digitalWrite(10,HIGH);
delay(1000);
}

else{

  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(9,LOW);
  
}
}
