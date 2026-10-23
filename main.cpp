/*
C++ Arduino "Hello, World!" LCD Text Animation
Author: github.com/sphereto
Date: October 21, 2026

Components:
- Arduino Arduino
- LCD I2C 0x27, 16, 2
- Wires

Connect:
Arduino     | LCD
------------------
GND         | GND
5V          | VCC
4A (analog) | SDA
5A (analog) | SCL
*/

#include <Wire.h>                   // Get Wire.h for wire communications
#include <LiquidCrystal_I2C.h>      // Get LiquidCrystal_I2C.h for LCD outputs

LiquidCrystal_I2C lcd(0x27, 16, 2); /*
                                       lcd is our Variable
                                       0x27 Declares hardware address where the information go
                                       16 Declares that we have 16 Columns
                                       2 Declares that we have 2 Rows. Upper and below
                                    */

void setup() {              // Run once, set up block
    lcd.init();             // Initialize LCD Library
    lcd.backlight();        // Initialize LCD backlight, Without it the LCD is very dark
    
    int delay = 50;         // Comfigure how long to delay (Miliseconds)
}

void loop() {               // Loop the process
    lcd.clear();            // Clear the text
    lcd.print("H");         // Print H
    delay(delay);           // Freeze for configured delay

    lcd.clear();
    lcd.setCursor(1, 0);    // Move the typing location
    lcd.print("e");
    delay(delay);

    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("l");
    delay(delay);

    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("l");
    delay(delay);

    lcd.clear();
    lcd.setCursor(4, 0);
    lcd.print("o");
    delay(delay);

    lcd.clear();
    lcd.setCursor(5, 0);
    lcd.print(",");
    delay(delay);

    lcd.clear();
    lcd.setCursor(6, 0);
    lcd.print(" ");

    lcd.clear();
    lcd.setCursor(7, 0);
    lcd.print("W");
    delay(delay);

    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("o");
    delay(delay);

    lcd.clear();
    lcd.setCursor(9, 0);
    lcd.print("r");
    delay(delay);

    lcd.clear();
    lcd.setCursor(10, 0);
    lcd.print("l");
    delay(delay);

    lcd.clear();
    lcd.setCursor(11, 0);
    lcd.print("d");
    delay(delay);

    lcd.clear();
    lcd.setCursor(12, 0);
    lcd.print("!");
    delay(delay);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Hello, World!");
    delay(delay);

    lcd.clear();
    delay(delay);

    lcd.print("Hello, World!");
    delay(delay);

    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Hello, World!");
    delay(delay);

    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Hello, World!");
    delay(delay);
}
