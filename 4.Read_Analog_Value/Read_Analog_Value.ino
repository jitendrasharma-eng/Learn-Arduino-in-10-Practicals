//Read Analog Value (Potentiometer)
//Concept: Analog input, analogRead().

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);  // Read potentiometer value
  Serial.println(value);       //Serial.println() show value on Serial monitor 
  delay(500);
}
