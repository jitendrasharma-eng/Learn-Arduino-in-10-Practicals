//Push Button LED (Basic Input)
//Concept: Digital input, digitalRead(), if condition.

void setup() {
  pinMode(12, INPUT_PULLUP); // Button pin as input (internal pull-up)
  pinMode(13, OUTPUT);      // LED pin as output
}

void loop() {
  if (digitalRead(12) == LOW) {  // Button pressed
    digitalWrite(13, HIGH);     
  } else {
    digitalWrite(13, LOW);
  }
}
