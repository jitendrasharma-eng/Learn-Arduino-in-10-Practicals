//Display on LCD (16x2)
//Concept: Using LiquidCrystal library.

#include <LiquidCrystal.h>  // Include the LiquidCrystal library

// Define LCD pin connections (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);  

void setup() {
  lcd.begin(16, 2);  // Initialize the LCD for 16 columns and 2 rows
  lcd.setCursor(0, 0);  // Set the cursor to column 0, row 0
  lcd.print("Hello, Arduino!");  // Print a message on the LCD
}

void loop() {
  // Empty loop since no updates are needed
}
