void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0 && Serial.read() == 'r') {
    Serial.println("Robot demo ready.");
    delay(1000);
    Serial.println("Check wiring.");
    delay(1000);
    Serial.println("Upload complete.");
  }
}
