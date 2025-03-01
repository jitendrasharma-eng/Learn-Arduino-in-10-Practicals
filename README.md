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
