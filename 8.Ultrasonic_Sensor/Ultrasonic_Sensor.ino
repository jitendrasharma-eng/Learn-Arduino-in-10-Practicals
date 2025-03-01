//Ultrasonic Sensor (Distance Measurement)
//Concept: Sensor communication, pulseIn().

#define TRIG 9   // Define trigger pin for the ultrasonic sensor
#define ECHO 10  // Define echo pin for the ultrasonic sensor

void setup() {
  Serial.begin(9600);      // Initialize serial communication at 9600 baud rate
  pinMode(TRIG, OUTPUT);   // Set TRIG pin as an output to send the pulse
  pinMode(ECHO, INPUT);    // Set ECHO pin as an input to receive the reflected pulse
}

void loop() {
  // Ensure the trigger pin is LOW before sending a pulse
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);  // Small delay to stabilize the sensor

  // Send a 10-microsecond pulse to the trigger pin
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  // Measure the time duration of the reflected pulse
  long duration = pulseIn(ECHO, HIGH);

  // Convert time duration into distance in centimeters
  int distance = duration * 0.034 / 2;

  // Display the distance measurement on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);  // Wait for 500 milliseconds before taking the next reading
}
