// Pin definitions
const int redPin = 12;    // PWM pin for red LED
const int greenPin = 10; // PWM pin for green LED
const int bluePin = 11;  // PWM pin for blue LED

const int potRed = A0;   // Analog pin for red potentiometer
const int potGreen = A2; // Analog pin for green potentiometer
const int potBlue = A1;  // Analog pin for blue potentiometer

void setup() {
  // Initialize LED pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // No need to initialize analog inputs, Arduino does it automatically
}

void loop() {
  // Read potentiometer values (0-1023)
  int redValue = analogRead(potRed);
  int greenValue = analogRead(potGreen);
  int blueValue = analogRead(potBlue);

  // Map analog readings to PWM range (0-255)
  redValue = map(redValue, 0, 1023, 0, 255);
  greenValue = map(greenValue, 0, 1023, 0, 255);
  blueValue = map(blueValue, 0, 1023, 0, 255);

  // Write PWM values to LED pins
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);

  delay(1000); // small delay for stability (optional)
}
