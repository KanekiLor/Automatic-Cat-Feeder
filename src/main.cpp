#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

// Definirea adreselor și pinilor
#define LCD_ADDRESS 0x27
#define LCD_COLUMNS 16
#define LCD_ROWS 2
#define SERVO_PIN 6  // Conform schemei
#define BUTTON_SET_TIME_PIN 7
#define BUTTON_SET_MEAL_PIN 8
#define BUTTON_SET_PORTION_PIN 9
#define BUTTON_MANUAL_FEED_PIN 10
#define POTENTIOMETER_PIN A0 // Pin analogic pentru potențiometru

// Inițializarea obiectelor
LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS);
Servo servo;

// Variabile pentru orele meselor și porții
int mealTimes[3] = {8, 14, 20}; // Orele meselor (exemplu: 8:00, 14:00, 20:00)
int portionSize = 90; // Dimensiunea porției în grade de rotație a servomotorului

void dispenseFood() {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Dispensing Food");
    servo.write(90);
    delay(1000);
    servo.write(0);
    delay(500);
    lcd.clear();
}

void setup() {
    lcd.begin();
    lcd.backlight();
    servo.attach(SERVO_PIN);

    pinMode(BUTTON_SET_TIME_PIN, INPUT_PULLUP);
    pinMode(BUTTON_SET_MEAL_PIN, INPUT_PULLUP);
    pinMode(BUTTON_SET_PORTION_PIN, INPUT_PULLUP);
    pinMode(BUTTON_MANUAL_FEED_PIN, INPUT_PULLUP);
    pinMode(POTENTIOMETER_PIN, INPUT);

    lcd.setCursor(0, 0);
    lcd.print("Cat Feeder Init");
    delay(2000);
    lcd.clear();
}

void loop() {
    static int lastHour = -1;
    int currentHour = hour(); // Funcție placeholder pentru ora curentă
    
    if (digitalRead(BUTTON_MANUAL_FEED_PIN) == LOW) {
        dispenseFood();
    }

    for (int i = 0; i < 3; i++) {
        if (currentHour == mealTimes[i] && lastHour != currentHour) {
            dispenseFood();
            lastHour = currentHour;
        }
    }
}

int hour() {
    return (millis() / 60000) % 24; // Simulare a ceasului 
}
