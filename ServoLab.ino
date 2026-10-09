#include <Servo.h>

// Create the servo object
Servo myServo;

// Store sensor and angle values
int sensorValue = 0;
int angle = 0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);

  Serial.println("ServoLab - Position Controller");
  Serial.println("------------------------------");
}

void loop() {
  // Read the potentiometer
  sensorValue = analogRead(A0);

  // Convert the reading into an angle
  angle = map(sensorValue, 0, 1023, 0, 180);

  // Command the servo to move
  myServo.write(angle);

  // Display the readings for monitoring
  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" | Target angle: ");
  Serial.print(angle);
  Serial.println(" degrees");

  delay(50);
}