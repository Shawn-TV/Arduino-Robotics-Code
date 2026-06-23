int command;

void allOff() {
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  allOff();
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    allOff();

    if (command == 'r') {
      digitalWrite(9, HIGH);
    } else if (command == 'g') {
      digitalWrite(11, HIGH);
    } else if (command == 'b') {
      digitalWrite(10, HIGH);
    }
  }
}
