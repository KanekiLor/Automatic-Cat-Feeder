# Automatic Cat Feeder

## Introduction

- **What it does:** This project is an automatic device for feeding a cat. It allows programming three meals per day and offers the option to manually distribute an additional portion of food.
- **Purpose:** To automate cat feeding, ensuring regular and controlled meals.
- **Idea behind it:** The need to feed cats at fixed times, even in the owner's absence.
- **Why it’s useful:** It helps maintain the cat's health and provides convenience for the owner.

---

## General Description
Block diagram of the project:  
1. **Arduino Uno** - The central unit that controls the entire system.  
2. **LCD** - Displays information such as the current time, meal schedule, and distributed portions.  
3. **Servo Motor** - Controls the opening of the compartment for food distribution.  
4. **Buttons:**
   - **Button to set the current time**
   - **Button to set the time for each meal (3 meals per day)**
   - **Button to adjust the food portion**
   - **Button for manual feeding**

![Block Diagram](https://github.com/KanekiLor/Automatic-Cat-Feeder/blob/main/Media/Untitled%20Diagram.jpg)

---

## Hardware Design
### List of Components
- **Arduino Uno**  
- **Servo motor** (e.g., SG90)  
- **16x1 LCD **  
- **7 Buttons** for control  
- Various auxiliary components: resistors, jumper wires.

### Electrical Schematics

![Electrical Schematic](https://github.com/KanekiLor/Automatic-Cat-Feeder/blob/main/Media/Screenshot%202024-12-19%20174007.png)

---

## Software Design

- **Development Environment:** Arduino IDE
- **Libraries used:**
  - `LiquidCrystal_I2C.h` for LCD control.
  - `Servo.h` for servo motor control.
- **Implemented algorithms and structures:**
  - Setting the current time and meal schedule.
  - Programming the servo motor to open and close the feeder.
  - Displaying information on the LCD.
- **Functions implemented:**
  - Functions to adjust the current time and schedule.
  - Function to automatically feed at set times.
  - Function to manually distribute food.

---

## Results
- The device works as specified:
  - Distributes food in 5-gram portions.
  - Three daily meals can be scheduled and adjusted.
  - The manual feeding portion is successfully activated.

---

## Conclusions
This project provides a simple and efficient solution for automatically feeding cats. It is useful for owners who want to ensure a regular feeding routine for their pets.

---

## Source Code and Other Resources to Include on GitHub
- Organize files as follows:
  - **`src/`**: Source code.
  - **`hardware/`**: Electrical schematics.
  - **`images/`**: Photos and images (block diagram, electrical schematics).
  - **README.md**: This document.

## Bill of Materials 
| Name | Photo | Source | Technical Characteristics |
|:------------:|:--------------:|:-------------:|:-------------:|
|Arduino UNO ATmega328P |![PHOTO](<images/BOM/WhatsApp Image 2024-12-16 at 11.22.14 PM.jpeg>)|Kit |[Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf)|
|Breadboard |![PHOTO](<images/BOM/WhatsApp Image 2024-12-16 at 11.22.15 PM (8).jpeg>)|[Store](https://www.emag.ro/breadboard-830-puncte-mb102-cl01/pd/DF0C5JBBM/?ref=history-shopping_404566740_38837_4)|-|
|LCD 1602 Module |![PHOTO](<images/BOM/WhatsApp Image 2024-12-16 at 11.22.15 PM (1).jpeg>)|Kit|[Datasheet](https://www.waveshare.com/datasheet/LCD_en_PDF/LCD1602.pdf)|
|Resistors |![PHOTO](<images/BOM/WhatsApp Image 2024-12-16 at 11.22.16 PM.jpeg>)|Kit|-|
|Colorful Wires |![PHOTO](<images/BOM/WhatsApp Image 2024-12-16 at 11.22.16 PM (1).jpeg>)|Kit|-|
|ServoMotor | Kit |-|

## Hardware Gallery 
[1](https://web.whatsapp.com/ec4f0ad4-45e4-49ac-a872-d764c00dcda6)


## Photo with the LCD Display Working
[Video](https://web.whatsapp.com/fe1b1b7c-494e-4bfc-b760-d4c365e273b0)
