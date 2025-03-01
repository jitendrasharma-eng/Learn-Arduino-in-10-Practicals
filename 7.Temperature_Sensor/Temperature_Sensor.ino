//Temperature Sensor (DHT11)
//Concept: Sensor interfacing.

#include <DHT.h>  // Include the DHT sensor library

// Define the pin where the DHT11 sensor is connected
#define DHTPIN 2  

// Define the type of DHT sensor (DHT11, DHT22, etc.)
#define DHTTYPE DHT11  

// Create a DHT object with the defined pin and sensor type
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
  dht.begin();  // Initialize the DHT sensor
}

void loop() {
  // Read the temperature in Celsius from the DHT11 sensor
  float temp = dht.readTemperature();
  
  // Print the temperature value to the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  delay(2000);  // Wait for 2 seconds before taking the next reading
}
