void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);  // Steady LED
  pinMode(12, OUTPUT);  // Blinking LED
  Serial.println("Arduino Ready");  // Debug message
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();
    Serial.print("Received: ");  // Echo received command
    Serial.println(cmd);

    // Switch 1: Steady control (pin 13)
    if (cmd == 'A') digitalWrite(13, HIGH);
    else if (cmd == 'B') digitalWrite(13, LOW);

    // Switch 2: Blink control (pin 12)
    if (cmd == 'C') {
      digitalWrite(12, !digitalRead(12));  // Toggle state
      delay(500);  // Blink interval
    }
    else if (cmd == 'D') digitalWrite(12, LOW);
  }
}