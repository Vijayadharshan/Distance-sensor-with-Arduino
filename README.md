# Ultrasonic Distance Measurement with Arduino

This project uses an ultrasonic sensor to measure distances in centimeters and controls a set of LEDs based on those distances. The project is designed for Arduino boards, and you can use it to build simple distance measurement applications, proximity alerts, or object detection systems.

## Table of Contents

1. [Introduction](#introduction)
2. [Hardware Components](#hardware-components)
3. [Circuit Diagram](#circuit-diagram)
4. [Software Setup](#software-setup)
5. [Usage](#usage)

## Introduction

This Arduino project reads distance data from an ultrasonic sensor and activates LEDs according to different distance thresholds. The sensor uses the time taken by sound waves to bounce back from an object to measure the distance.

## Hardware Components

To build this project, you need the following components:
- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensor (e.g., HC-SR04)
- 3 LEDs (any color)
- 3 resistors (220 ohms recommended for each LED)
- Jumper wires
- Breadboard

## Circuit Diagram

Here's the circuit diagram for this project:
- [Circuit Diagram](https://drive.google.com/file/d/1rrHOp8bEKM0aamwTLqPt--ZvaelBqv6p/view?usp=sharing)

## Software Setup

To get started, set up your Arduino IDE and ensure your Arduino board is connected to your computer. Follow these steps:

1. Install the [Arduino IDE](https://www.arduino.cc/en/software).
2. Connect your Arduino board to your computer via USB.
3. Copy the provided code into the Arduino IDE.
4. Verify and upload the code to your Arduino board.

## Usage

Once you've set up the hardware and uploaded the code, here's how to use the project:
- Power the Arduino board.
- The system measures distance in centimeters and outputs the value to the serial monitor.
- Depending on the distance, different combinations of LEDs will light up.
  - If the distance is greater than 15 cm, all LEDs are off.
  - If the distance is between 10 and 15 cm, the first LED is on.
  - If the distance is between 5 and 10 cm, the first two LEDs are on.
  - If the distance is less than 5 cm, all LEDs are on.
