# Learn-Arduino-in-10-Practicals
This repository contains **10 hands-on experiments** to help beginners learn **Arduino programming and hardware interfacing** step by step. Each experiment includes **circuit diagrams, code, and explanations**. 

Experiment 1: Blinking LED
Components:
Arduino Uno
LED (any color)
220Ω resistor
The blinking LED experiment is the "Hello World" of embedded systems. It demonstrates how to control an LED using an Arduino.

The setup() function configures pin 13 as an output.
The loop() function turns the LED ON for 1 second and then OFF for 1 second, repeating indefinitely.
How to Run This Experiment
1️⃣ Connect the LED to pin 13 of Arduino (with a 220Ω resistor in series).
2️⃣ Upload the provided code to the Arduino board.
3️⃣ Observe the LED blinking every 1 second.


Experiment 2: Blinking LED
Components:
Arduino Uno
Push Button
LED
220Ω resistor
This experiment teaches how to read a push button as an input and control an LED based on its state.

The setup() function configures:
Pin 12 as an input with internal pull-up resistor (to avoid floating state).
Pin 13 as an output for the LED.
The loop() function continuously checks the button's state:
If pressed (LOW state due to pull-up), the LED turns ON.
If not pressed, the LED turns OFF.
How to Run This Experiment
1️⃣ Press the button → The LED turns ON.
2️⃣ Release the button → The LED turns OFF.
3️⃣ Try using an external pull-down resistor (10kΩ) instead of INPUT_PULLUP.


Experiment 3: PWM LED Fading (Analog Output)
Components:
Arduino Uno
LED
220Ω resistor
This experiment teaches how to use PWM to control the LED's brightness smoothly. Instead of just turning an LED ON or OFF, we will fade it in and out by changing its brightness gradually.

The setup() function sets pin 9 as an output, which supports PWM.
The loop() function:
Gradually increases LED brightness from 0 to 255.
Gradually decreases brightness back to 0, creating a fading effect.
How to Run This Experiment
1️⃣ Upload the code to Arduino Uno.
2️⃣ Observe the LED gradually increasing and decreasing brightness in a loop.
3️⃣ Try changing delay(10) to make the fade faster or slower.


Experiment 4: Read Analog Value (Potentiometer)
Components:
Arduino Uno
Potentiometer (10kΩ recommended)
This experiment demonstrates how to read an analog value using a potentiometer and display it in the Serial Monitor. The potentiometer acts as a variable resistor, changing the voltage input to the Arduino.

The setup() function initializes the serial communication at 9600 baud rate.
The loop() function:
Reads the analog value from pin A0 (range 0-1023).
Prints the value to the Serial Monitor.
Waits 500ms before reading again.
How to Run This Experiment
1️⃣ Upload the code to Arduino Uno.
2️⃣ Open Serial Monitor (Tools → Serial Monitor) and set baud rate to 9600.
3️⃣ Rotate the potentiometer and observe the values changing between 0 and 1023.

📌 Next Steps: Use the analog value to control LED brightness or a servo motor! 


Experiment 6: Display on LCD (16x2) - Parallel Mode 
Components:
Arduino Uno
16x2 LCD (without I2C module)
10kΩ potentiometer (for contrast adjustment)
Resistors & wires
This experiment demonstrates how to interface a 16x2 LCD in 4-bit mode using the LiquidCrystal library.

The setup() function:

Initializes the LCD with specified pins.
Sets the cursor at the first row, first column.
Displays "Hello, Arduino!".
The loop() function is empty because we're displaying static text.
How to Run This Experiment
1️⃣ Connect the LCD to Arduino as per the wiring diagram.
2️⃣ Upload the code in Arduino IDE.
3️⃣ Adjust the potentiometer to set the contrast properly.
4️⃣ Observe "Hello, Arduino!" appearing on the LCD.


Experiment 7: Temperature Sensor (DHT11) 🌡️
🔹 Concept: Interfacing a DHT11 temperature sensor with Arduino.
🔹 Components:
Arduino Uno
DHT11 Sensor
10kΩ pull-up resistor (optional)
Jumper wires
This experiment demonstrates how to read temperature data from a DHT11 sensor and display it on the Serial Monitor using the DHT library.

The setup() function:

Starts serial communication at 9600 baud rate.
Initializes the DHT sensor.
The loop() function:
Reads the temperature in Celsius from the DHT11 sensor.
Prints the temperature to the Serial Monitor.
Waits 2 seconds before taking the next reading.
How to Run This Experiment
1️⃣ Install the DHT Library
In Arduino IDE, go to Sketch → Include Library → Manage Libraries.
Search for "DHT sensor library by Adafruit" and install it.
2️⃣ Connect the DHT11 sensor as per the wiring diagram.
3️⃣ Upload the code to the Arduino.
4️⃣ Open Serial Monitor (Tools → Serial Monitor) and set the baud rate to 9600.
5️⃣ Observe the temperature readings updating every 2 seconds.
