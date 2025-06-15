<h1 align="center">🚀 Learn Arduino in 10 Practicals</h1>

<p align="center"><b>A hands-on guide to mastering Arduino step-by-step for beginners!</b></p>

---

<h2>📘 Overview</h2>
<p>This repository contains <strong>10 hands-on experiments</strong> to help beginners learn <strong>Arduino programming and hardware interfacing</strong> step by step. Each experiment includes <em>circuit diagrams, code, and explanations</em>.</p>

---

<h2>🧪 Experiments List</h2>

<h3>🔹 Experiment 1: Blinking LED</h3>
<ul>
  <li>🧰 Components: Arduino Uno, LED, 220Ω resistor</li>
  <li>⚙️ Demonstrates basic digital output using <code>digitalWrite()</code>.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Connect the LED to pin 13 with a 220Ω resistor.</li>
    <li>Upload the code to Arduino.</li>
    <li>Watch the LED blink every second.</li>
  </ol>
</details>

---

<h3>🔹 Experiment 2: Push Button Controlled LED</h3>
<ul>
  <li>🧰 Components: Arduino Uno, Push Button, LED, 220Ω resistor</li>
  <li>⚙️ Uses <code>digitalRead()</code> with internal pull-up.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Button press turns LED ON, release turns it OFF.</li>
    <li>Try external pull-down (10kΩ) for learning.</li>
  </ol>
</details>

---

<h3>🔹 Experiment 3: PWM LED Fading</h3>
<ul>
  <li>🧰 Components: Arduino Uno, LED, 220Ω resistor</li>
  <li>⚙️ Uses <code>analogWrite()</code> to fade LED brightness.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Upload the code using PWM on pin 9.</li>
    <li>LED will fade in and out.</li>
  </ol>
</details>

---

<h3>🔹 Experiment 4: Reading Analog Value (Potentiometer)</h3>
<ul>
  <li>🧰 Components: Arduino Uno, Potentiometer (10kΩ)</li>
  <li>⚙️ Reads analog values using <code>analogRead()</code>.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Rotate potentiometer.</li>
    <li>Open Serial Monitor to view values (0-1023).</li>
  </ol>
</details>

---

<h3>🔹 Experiment 5: Servo Motor Control</h3>
<ul>
  <li>🧰 Components: Arduino Uno, SG90 Servo Motor</li>
  <li>⚙️ Uses <code>Servo.h</code> library to control angles.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Connect servo to Arduino.</li>
    <li>Use Servo library to move it from 0° → 180°.</li>
  </ol>
</details>

---

<h3>🔹 Experiment 6: 16x2 LCD Display</h3>
<ul>
  <li>🧰 Components: Arduino Uno, 16x2 LCD, 10kΩ potentiometer</li>
  <li>⚙️ Uses <code>LiquidCrystal.h</code> to display text.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Wire LCD in 4-bit mode.</li>
    <li>Upload code and adjust contrast.</li>
    <li>See "Hello, Arduino!" on the display.</li>
  </ol>
</details>

---

<h3>🔹 Experiment 7: Temperature Sensing (DHT11) 🌡️</h3>
<ul>
  <li>🧰 Components: Arduino Uno, DHT11, 10kΩ resistor</li>
  <li>⚙️ Reads temperature using <code>DHT.h</code> library.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Install DHT sensor library by Adafruit.</li>
    <li>Upload code and view temperature in Serial Monitor.</li>
  </ol>
</details>

---

<h3>🔹 Experiment 8: Ultrasonic Distance Measurement</h3>
<ul>
  <li>🧰 Components: Arduino Uno, HC-SR04</li>
  <li>⚙️ Measures distance using <code>pulseIn()</code>.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Connect TRIG and ECHO pins.</li>
    <li>Upload code and read distance on Serial Monitor.</li>
  </ol>
</details>

---

<h3>🔹 Experiment 9: DC Motor Control (L298N)</h3>
<ul>
  <li>🧰 Components: Arduino Uno, L298N, DC Motor</li>
  <li>⚙️ Controls direction & speed using <code>analogWrite()</code>.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Wire the motor driver module.</li>
    <li>Observe motor changing direction and speed.</li>
  </ol>
</details>

---

<h3>🔹 Experiment 10: Motion Detection with PIR Sensor</h3>
<ul>
  <li>🧰 Components: Arduino Uno, PIR Sensor, Buzzer</li>
  <li>⚙️ Detects motion and alerts via buzzer & Serial Monitor.</li>
</ul>
<details>
  <summary>📋 How to Run</summary>
  <ol>
    <li>Upload code and connect sensor & buzzer.</li>
    <li>Move in front → buzzer sounds and message appears.</li>
  </ol>
</details>

---

<h2>📎 Library Installation Guide</h2>
<ul>
  <li>Open Arduino IDE.</li>
  <li>Go to <strong>Sketch → Include Library → Manage Libraries</strong>.</li>
  <li>Search and install: <code>Servo</code>, <code>DHT</code>, etc.</li>
  <li>Now use <code>#include &lt;LibraryName.h&gt;</code> in your code.</li>
</ul>

---

<h2>🛠️ Author & License</h2>
<p><strong>Created by:</strong> Jitendra Sharma</p>
<p>📜 Licensed under the <code>MIT License</code></p>

<p align="center">🌟 If you find this helpful, give a ⭐️ to support!</p>
