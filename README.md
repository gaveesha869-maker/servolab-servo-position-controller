# ServoLab — Servo Position Controller with LCD

An Arduino-based servo position control project built and tested in Tinkercad Circuits. The system uses a potentiometer to control a servo motor and displays the commanded angle on a 16×2 LCD.

## Project Overview

ServoLab demonstrates the fundamentals of embedded systems, analog input processing, actuator control, and LCD interfacing.

The potentiometer provides a variable input to the Arduino. The Arduino converts the analog reading into a target angle between 0° and 180°, commands the servo to move, and displays the target angle on the LCD.

## Features

* Potentiometer-based position control
* Arduino analog input processing
* Conversion of analog readings into servo angles
* Servo motor control using the Servo library
* Real-time target-angle display on a 16×2 LCD
* Serial Monitor output for debugging and observation

## Components Used

* Arduino Uno R3
* Potentiometer
* Micro servo motor
* 16×2 LCD
* Jumper wires
* Tinkercad Circuits simulation

## Pin Connections

| Component                | Connection                                      |
| ------------------------ | ----------------------------------------------- |
| Potentiometer outer pins | 5V and GND                                      |
| Potentiometer middle pin | A0                                              |
| Servo signal             | Digital pin 9                                   |
| Servo power              | 5V and GND                                      |
| LCD RS                   | Digital pin 12                                  |
| LCD E                    | Digital pin 11                                  |
| LCD DB4                  | Digital pin 5                                   |
| LCD DB5                  | Digital pin 4                                   |
| LCD DB6                  | Digital pin 3                                   |
| LCD DB7                  | Digital pin 2                                   |
| LCD RW                   | GND                                             |
| LCD VCC                  | 5V                                              |
| LCD GND                  | GND                                             |
| LCD VO                   | GND for the simulation's initial contrast setup |

The LCD operates in 4-bit mode. DB0–DB3 are left unconnected. The LCD backlight pins are not connected in the current circuit.

## How It Works

1. The potentiometer produces a variable voltage.
2. The Arduino reads the voltage through analog input A0, producing a value from 0 to 1023.
3. The `map()` function converts that reading into a target angle from 0° to 180°.
4. The Servo library sends the position command to the servo.
5. The LCD displays the commanded angle.
6. The Serial Monitor displays the sensor reading and target angle for debugging.

## Testing

The circuit was tested in Tinkercad Circuits at three potentiometer positions:

* Minimum input: target angle approaches 0°.
* Middle input: target angle approaches 90°.
* Maximum input: target angle approaches 180°.

All three tests passed.

## Technologies and Concepts

* Arduino C/C++
* Tinkercad Circuits
* Analog input processing
* Servo motor control
* 16×2 LCD interfacing
* Embedded systems fundamentals

## Project Status

Working simulation prototype.

**Note:** The LCD displays the commanded angle, not an independently measured servo shaft position. This project is a simulation and has not been tested on physical hardware.

## Author

Created as a hands-on Mechatronics learning and portfolio project.
