#define Trig 2
#define Echo 3

const int INL1 = 4;
const int INL2 = 5;
const int E1 = 6;
const int INR3 = 7;
const int INR4 = 8;
const int E2 = 9;

float cm;
float echoTime;

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

void drive(int leftA, int leftB, int leftSpeed, int rightA, int rightB, int rightSpeed)
{
  digitalWrite(INL1, leftA);
  digitalWrite(INL2, leftB);
  analogWrite(E1, leftSpeed);
  digitalWrite(INR3, rightA);
  digitalWrite(INR4, rightB);
  analogWrite(E2, rightSpeed);
}

void loop()
{
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);

  echoTime = float(pulseIn(Echo, HIGH));
  cm = (echoTime * 17) / 1000;

  if (cm < 10)
  {
    drive(HIGH, HIGH, 255, HIGH, HIGH, 255);
    delay(1000);
    drive(HIGH, LOW, 200, HIGH, LOW, 200);
    delay(1500);
    drive(HIGH, LOW, 200, HIGH, LOW, 200);
    delay(1000);
    drive(HIGH, LOW, 200, LOW, HIGH, 200);
    delay(1500);
  }
  else
  {
    drive(LOW, HIGH, 200, LOW, HIGH, 200);
  }
}
