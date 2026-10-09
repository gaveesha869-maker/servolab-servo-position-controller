# ServoLab — Interactive Servo Position Controller

## Overview

ServoLab is a beginner-friendly mechatronics project that demonstrates how a potentiometer can control the position of a servo motor using an Arduino Uno.

The project was developed and tested using **Tinkercad Circuits**, a browser-based electronics simulation tool.

## Project Objectives

* Read analog input from a potentiometer.
* Convert sensor readings into servo position commands.
* Control a servo using the Arduino Servo library.
* Display sensor readings and target angles through the Serial Monitor.

## Components Used

* Arduino Uno R3
* Potentiometer
* Servo motor
* Connecting wires
* Tinkercad Circuits for simulation

## How It Works

1. The potentiometer provides an adjustable analog input to pin A0.
2. The Arduino reads a value between 0 and 1023.
3. The `map()` function converts that reading into an angle between 0 and 180 degrees.
4. The `Servo` library sends the position command to the servo connected to digital pin 9.
5. The Serial Monitor displays the sensor reading and target angle.

## Pin Connections

| Component                       | Arduino connection |
| ------------------------------- | ------------------ |
| Potentiometer middle pin        | A0                 |
| Potentiometer outer pins        | 5V and GND         |
| Servo signal wire               | Digital pin 9      |
| Servo power wire (red)          | 5V                 |
| Servo ground wire (brown/black) | GND                |

## Testing

The simulation was tested at minimum, middle, and maximum potentiometer positions.

* Minimum input: servo commanded toward 0°.
* Middle input: servo commanded to approximately 90°.
* Maximum input: servo commanded toward 180°.
* Serial Monitor: displayed changing sensor readings and target angles.

## Skills Demonstrated

* Arduino programming with C++
* Analog input reading
* Basic sensor-to-actuator control
* Servo motor control
* Serial communication and debugging
* Circuit simulation and testing

## Project Status

Completed beginner-level simulation project.

**Note:** This project was tested in simulation. It has not yet been tested using physical hardware.

## Future Improvements

* Add input smoothing to reduce jitter.
* Restrict the servo's movement to a configurable safe range.
* Add a second control mode using predefined positions.
* Build and test the circuit with physical components.

## Author

Mechatronics learner building practical projects to develop programming, electronics, and control-system skills.
