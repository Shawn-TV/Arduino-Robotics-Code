#define Trig 2//引脚Trig 连接 IO D2  
#define Echo 3 //引脚Echo 连接 IO D3
const int INL1=4;
const int INL2=5;
const int E1=6;
const int INR3=7;
const int INR4=8;
const int E2=9; 
float cm; //距离变量  
float temp; //临时变量   回波等待时间值
  
void setup() 
{    
  pinMode(Trig, OUTPUT);  
  pinMode(Echo, INPUT); 
  pinMode(INL1, OUTPUT); 
  pinMode(INL2, OUTPUT); 
  pinMode(INR3, OUTPUT); 
  pinMode(INR4, OUTPUT); 
  pinMode(E1, OUTPUT); 
  pinMode(E2, OUTPUT);   
}  
  
void loop() {  
  //给Trig发送一个低高低的短时间脉冲,触发测距  
  digitalWrite(Trig, LOW); //给Trig发送一个低电平  
  delayMicroseconds(2);    //等待 2微妙  
  digitalWrite(Trig,HIGH); //给Trig发送一个高电平  
  delayMicroseconds(10);    //等待 10微妙  666
  digitalWrite(Trig, LOW); //给Trig发送一个低电平  
    
  temp = float(pulseIn(Echo, HIGH)); //存储回波等待时间,  
  //pulseIn函数会等待引脚变为HIGH,开始计算时间,再等待变为LOW并停止计时  
  //返回脉冲的长度  
    
  //声速是:340m/1s 换算成 34000cm / 1000000μs => 34 / 1000  
  //因为发送到接收,实际是相同距离走了2回,所以要除以2 
  //距离(厘米)  =  (回波时间 * (34 / 1000)) / 2  
  //简化后的计算公式为 (回波时间 * 17)/ 1000  
      cm = (temp * 17 )/1000; //把回波时间换算成cm  
    if(cm<10)
    {
       digitalWrite(INL1,HIGH);
       digitalWrite(INL2,HIGH);
       analogWrite(E1,255);
       digitalWrite(INR3,HIGH);
       digitalWrite(INR4,HIGH);
       analogWrite(E2,255);
       delay(1000);
       digitalWrite(INL1,HIGH);
       digitalWrite(INL2,LOW);
       analogWrite(E1,200);
       digitalWrite(INR3,HIGH);
       digitalWrite(INR4,LOW);
       analogWrite(E2,200);
       delay(1500);
       digitalWrite(INL1,HIGH);
       digitalWrite(INL2,LOW);
       analogWrite(E1,200);
       digitalWrite(INR3,HIGH);
       digitalWrite(INR4,LOW);
       analogWrite(E2,200);
       delay(1000);   
       digitalWrite(INL1,HIGH);
       digitalWrite(INL2,LOW);
       analogWrite(E1,200);
       digitalWrite(INR3,LOW);
       digitalWrite(INR4,HIGH);
       analogWrite(E2,200);
       delay(1500);   
     }
    else
    {
       digitalWrite(INL1,LOW);
       digitalWrite(INL2,HIGH);
       analogWrite(E1,200);
       digitalWrite(INR3,LOW);
       digitalWrite(INR4,HIGH);
       analogWrite(E2,200); 
    } 
   }