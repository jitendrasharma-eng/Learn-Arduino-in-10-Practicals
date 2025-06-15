# Learn-Arduino-in-10-Practicals
<h1>This repository contains **10 hands-on experiments** to help beginners learn **Arduino programming and hardware interfacing** step by step. Each experiment includes **circuit diagrams, code, and explanations**.</h1>

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


Experiment 5: Servo Motor Control with Arduino
 Components:
Arduino Uno
Servo Motor (SG90 or MG995)
Jumper Wires
A servo motor is a motor with precise angular control.
We use the Servo library to control the motor.
The motor moves to 0° → 90° → 180° at 1-second intervals.
How to Run This Experiment
1️⃣ Connect the servo motor to the Arduino.
2️⃣ Upload the code.
3️⃣ The servo will move to 0° → 90° → 180° repeatedly.
note:-Install from Arduino Library Manager (Easiest Way)
Open Arduino IDE.
Go to:
Arduino IDE (Old versions): Click on Sketch → Include Library → Manage Libraries….
Arduino IDE 2.0: Click on Library Manager (icon on the left panel).
Search for the required library (e.g., Servo, DHT).
Click Install on the correct library.
Done! ✅ Now you can use #include <LibraryName.h> in your code.



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


Experiment 8: Ultrasonic Sensor (Distance Measurement)
Components:
Arduino Uno
HC-SR04 Ultrasonic Sensor
Jumper wires
This experiment demonstrates how to measure distance using an ultrasonic sensor (HC-SR04).
The TRIG pin sends an ultrasonic pulse.
The ECHO pin receives the reflected pulse from an object.
The pulseIn() function measures the time taken for the pulse to return.
The distance is calculated using the formula:

Distance=(Time×0.0342)/2
​
(Where 0.034 cm/µs is the speed of sound in air, divided by 2 to account for the round-trip of the pulse).
How to Run This Experiment
1️⃣ Connect the ultrasonic sensor as per the wiring diagram.
2️⃣ Upload the code to the Arduino.
3️⃣ Open Serial Monitor (Tools → Serial Monitor) and set baud rate to 9600.
4️⃣ Move an object in front of the sensor and observe the distance readings updating.


Experiment 9: Motor Control using L298N
Components:
Arduino Uno
L298N Motor Driver Module
DC Motor
Jumper Wires
Power Supply (Battery or Adapter)
This experiment demonstrates how to control the speed and direction of a DC motor using an L298N motor driver.
The L298N module allows bidirectional motor control.
The ENA (Enable A) pin is used for speed control via PWM (Pulse Width Modulation).
The IN1 and IN2 pins control the motor's rotation direction.
How to Run This Experiment
1️⃣ Connect the L298N motor driver to the Arduino and motor as per the wiring diagram.
2️⃣ Upload the code to the Arduino.
3️⃣ Observe the DC motor rotating in one direction for 2 seconds.
4️⃣ The motor then switches direction and runs for another 2 seconds.
5️⃣ Modify the analogWrite(ENA, value) to change the motor speed.


Experiment 10: Motion Detection with PIR Sensor
Components:
Arduino Uno
PIR Motion Sensor
Buzzer
Jumper Wires
A PIR sensor detects motion by sensing changes in infrared radiation (heat).
When motion is detected:
✅ The buzzer sounds
✅ A message is displayed on the Serial Monitor
How to Run This Experiment
1️⃣ Connect the PIR sensor and buzzer to the Arduino.
2️⃣ Upload the code.
3️⃣ Wait for the PIR sensor to initialize (~30 seconds).
4️⃣ Move in front of the sensor → Buzzer turns ON and "Motion Detected!" appears in the Serial Monitor.
5️⃣ Stop moving → Buzzer turns OFF.


