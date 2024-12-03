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

`![Block Diagram](images/schemabloc.png)`

---

## Hardware Design
### List of Components
- **Arduino Uno**  
- **Servo motor** (e.g., SG90)  
- **16x2 LCD with I2C adapter**  
- **4 Buttons** for control  
- Various auxiliary components: resistors, jumper wires, breadboard.

### Electrical Schematics

`![Electrical Schematic](images/schemelectric.png)`

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
