//Motor Control using L298N
//Concept: Controlling DC Motor.

#define ENA 9  // Enable pin for motor speed control (PWM)
#define IN1 8  // Motor direction control pin 1
#define IN2 7  // Motor direction control pin 2

void setup() {
  pinMode(ENA, OUTPUT);  // Set ENA as output for speed control
  pinMode(IN1, OUTPUT);  // Set IN1 as output for motor direction
  pinMode(IN2, OUTPUT);  // Set IN2 as output for motor direction
}

void loop() {
  // Rotate motor in one direction
  digitalWrite(IN1, HIGH);  
  digitalWrite(IN2, LOW);   
  analogWrite(ENA, 150);  // Set motor speed (0-255)
  delay(2000);  // Run motor for 2 seconds

  // Rotate motor in the opposite direction
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(2000);  // Run motor for 2 seconds
}
