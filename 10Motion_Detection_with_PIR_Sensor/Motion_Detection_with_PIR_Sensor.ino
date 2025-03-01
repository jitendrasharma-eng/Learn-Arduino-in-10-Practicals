//Motion Detection with PIR Sensor
//Concept: Detecting motion using a PIR sensor.

#define pirPin 2
#define buzerPin 9

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {
    digitalWrite(buzerPin, HIGH);
    Serial.println("Motion Detected!");
    delay(1000);
  } else {
    digitalWrite(buzerPin, LOW);
  }
}
