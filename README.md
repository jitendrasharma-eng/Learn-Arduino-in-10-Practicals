<h1>Learn-Arduino-in-10-Practicals</h1>

<p>This repository contains <strong>10 hands-on experiments</strong> to help beginners learn <strong>Arduino programming and hardware interfacing</strong> step by step. Each experiment includes <strong>circuit diagrams, code, and explanations</strong>.</p>

<h2>Experiment 1: Blinking LED</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
LED (any color)<br>
220Ω resistor</p>
<p>The blinking LED experiment is the "Hello World" of embedded systems. It demonstrates how to control an LED using an Arduino.</p>
<ul>
  <li>The setup() function configures pin 13 as an output.</li>
  <li>The loop() function turns the LED ON for 1 second and then OFF for 1 second, repeating indefinitely.</li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Connect the LED to pin 13 of Arduino (with a 220Ω resistor in series).</li>
  <li>Upload the provided code to the Arduino board.</li>
  <li>Observe the LED blinking every 1 second.</li>
</ol>

<h2>Experiment 2: Push Button with LED</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
Push Button<br>
LED<br>
220Ω resistor</p>
<p>This experiment teaches how to read a push button as an input and control an LED based on its state.</p>
<ul>
  <li>Pin 12 as input with internal pull-up resistor.</li>
  <li>Pin 13 as output for LED.</li>
  <li>If button is pressed → LED turns ON.</li>
  <li>If not pressed → LED turns OFF.</li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Press the button → The LED turns ON.</li>
  <li>Release the button → The LED turns OFF.</li>
  <li>Try using an external pull-down resistor (10kΩ) instead of INPUT_PULLUP.</li>
</ol>

<h2>Experiment 3: PWM LED Fading (Analog Output)</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
LED<br>
220Ω resistor</p>
<p>This experiment teaches PWM to control the LED's brightness smoothly.</p>
<ul>
  <li>Pin 9 used for PWM output.</li>
  <li>LED brightness gradually increases from 0 to 255 and back to 0.</li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Upload the code to Arduino Uno.</li>
  <li>Observe LED fading effect.</li>
  <li>Try changing delay(10) for different speeds.</li>
</ol>

<h2>Experiment 4: Read Analog Value (Potentiometer)</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
Potentiometer (10kΩ recommended)</p>
<p>Demonstrates reading analog values from a potentiometer.</p>
<ul>
  <li>Reads from A0 (0–1023 range).</li>
  <li>Prints to Serial Monitor.</li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Upload code to Arduino Uno.</li>
  <li>Open Serial Monitor at 9600 baud.</li>
  <li>Rotate the potentiometer and observe changes.</li>
</ol>
<p><strong>📌 Next Steps:</strong> Use analog value to control LED brightness or servo motor.</p>

<h2>Experiment 5: Servo Motor Control with Arduino</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
Servo Motor (SG90 or MG995)<br>
Jumper Wires</p>
<p>Uses Servo library to control motor angles (0° → 90° → 180°).</p>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Connect servo motor.</li>
  <li>Upload code.</li>
  <li>Observe servo rotating between angles.</li>
</ol>
<p><strong>Note:</strong> Install library via Arduino Library Manager:</p>
<ul>
  <li>Sketch → Include Library → Manage Libraries.</li>
  <li>Search and install Servo, DHT, etc.</li>
</ul>

<h2>Experiment 6: Display on LCD (16x2) - Parallel Mode</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
16x2 LCD<br>
10kΩ potentiometer<br>
Resistors & wires</p>
<p>Demonstrates interfacing LCD using LiquidCrystal library.</p>
<ul>
  <li>Initializes LCD and prints static text.</li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Connect LCD as per diagram.</li>
  <li>Upload the code.</li>
  <li>Adjust potentiometer for contrast.</li>
  <li>Observe "Hello, Arduino!" on LCD.</li>
</ol>

<h2>Experiment 7: Temperature Sensor (DHT11) 🌡️</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
DHT11 Sensor<br>
10kΩ pull-up resistor (optional)<br>
Jumper wires</p>
<p>Reads temperature data from DHT11 sensor using DHT library.</p>
<ul>
  <li>Initializes serial at 9600 baud.</li>
  <li>Prints temperature every 2 seconds.</li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Install "DHT sensor library by Adafruit".</li>
  <li>Connect DHT11 sensor.</li>
  <li>Upload code to Arduino.</li>
  <li>Open Serial Monitor (9600 baud).</li>
</ol>

<h2>Experiment 8: Ultrasonic Sensor (Distance Measurement)</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
HC-SR04 Ultrasonic Sensor<br>
Jumper wires</p>
<p>Measures distance using ultrasonic sensor.</p>
<ul>
  <li>TRIG sends pulse.</li>
  <li>ECHO receives pulse.</li>
  <li>Distance calculated using: <code>Distance = (Time × 0.0342) / 2</code></li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Connect sensor.</li>
  <li>Upload code.</li>
  <li>Open Serial Monitor (9600 baud).</li>
  <li>Move object and observe distance updates.</li>
</ol>

<h2>Experiment 9: Motor Control using L298N</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
L298N Motor Driver Module<br>
DC Motor<br>
Jumper Wires<br>
Power Supply</p>
<p>Controls speed and direction of DC motor using L298N driver.</p>
<ul>
  <li>ENA controls speed via PWM.</li>
  <li>IN1/IN2 control motor direction.</li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Connect motor driver and motor.</li>
  <li>Upload code.</li>
  <li>Motor rotates in both directions alternately.</li>
  <li>Modify <code>analogWrite(ENA, value)</code> to change speed.</li>
</ol>

<h2>Experiment 10: Motion Detection with PIR Sensor</h2>
<p><strong>Components:</strong><br>
Arduino Uno<br>
PIR Motion Sensor<br>
Buzzer<br>
Jumper Wires</p>
<p>PIR sensor detects motion based on infrared radiation.</p>
<ul>
  <li>Motion detected → Buzzer ON + Serial message</li>
  <li>No motion → Buzzer OFF</li>
</ul>
<p><strong>How to Run This Experiment</strong></p>
<ol>
  <li>Connect PIR sensor and buzzer.</li>
  <li>Upload code.</li>
  <li>Wait ~30 seconds for sensor to initialize.</li>
  <li>Move in front of sensor → Observe buzzer and Serial Monitor.</li>
</ol>
<p><strong>✅ Happy Learning! Build more Projects using Arduino 🚀</strong></p>
📬 Author: Jitendra Sharma
📧 Email: jitendrasharma7409@gmail.com
🔗 Follow for more: https://github.com/jitendrasharma-eng?tab=repositories | www.youtube.com/@ECodeLab-mv4jm | linkedin.com/in/jitendra-sharma-484072248 [https://www.linkedin.com/in/jitendra-sharma-484072248?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BdRzhEpUKQSqQh6%2Fm6UayRw%3D%3D]
