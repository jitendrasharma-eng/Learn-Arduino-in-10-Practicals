//PWM LED Fading (Analog Output)
//Concept: Pulse Width Modulation (PWM), analogWrite().

void setup() {
  pinMode(9, OUTPUT); // PWM pin
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(9, i);  // Increase brightness
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(9, i);  // Decrease brightness
    delay(10);
  }
}
