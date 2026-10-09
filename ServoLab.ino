#include <Servo.h>
#include <LiquidCrystal.h>

// Create the servo and LCD objects
Servo myServo;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorValue = 0;
int angle = 0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);

  // Initialize the 16-column, 2-row LCD
  lcd.begin(16, 2);
  lcd.print("ServoLab Ready");
  delay(1500);
  lcd.clear();

  Serial.println("ServoLab - Position Controller");
}

void loop() {
  // Read the potentiometer
  sensorValue = analogRead(A0);

  // Convert the reading to an angle
  angle = map(sensorValue, 0, 1023, 0, 180);

  // Move the servo
  myServo.write(angle);

  // Display the angle on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Servo Angle:");

  lcd.setCursor(0, 1);
  lcd.print(angle);
  lcd.print(" degrees     ");

  // Display readings in Serial Monitor
  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" | Target angle: ");
  Serial.println(angle);

  delay(100);
}
