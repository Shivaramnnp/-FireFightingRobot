#include <LiquidCrystal.h>
#include <Servo.h>

// Create a Servo object
Servo s1;

// LCD pin connections: RS, E, D4, D5, D6, D7
int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;

// Fire sensor pin
const int fir = A0;

// Motor driver pins
const int m11 = 10, m12 = 11, m21 = 12, m22 = 13;

// Relay pin
const int rly = A2;

// Create the LCD object
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Set motor driver pins as outputs
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);

  // Set relay pin as output
  pinMode(rly, OUTPUT);

  // Set fire sensor pin as input
  pinMode(fir, INPUT);

  // Initialize the LCD
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("Fire:");

  // Attach the servo to pin 9
  s1.attach(9);
  s1.write(0); // Start at 0 degrees

  lcd.setCursor(0, 1); // Move cursor to second line
  digitalWrite(rly, HIGH); // Relay initially ON
}

void loop() {
  // Read fire sensor input
  int fir_in = digitalRead(fir);

  if (fir_in == LOW) {
    // Fire detected
    lcd.setCursor(0, 1);
    lcd.print("YES ");
    digitalWrite(rly, HIGH); // Turn relay ON

    s1.write(0);

    // Stop both motors
    digitalWrite(m11, LOW);
    digitalWrite(m12, LOW);
    digitalWrite(m21, LOW);
    digitalWrite(m22, LOW);

    delay(1000);

    // Move servo to spray or move nozzle
    s1.write(90);
    delay(1000);
    s1.write(0);
  } else {
    // No fire
    lcd.setCursor(0, 1);
    lcd.print("NO  ");
    digitalWrite(rly, LOW); // Turn relay OFF

    s1.write(0);

    // Stop both motors
    digitalWrite(m11, LOW);
    digitalWrite(m12, LOW);
    digitalWrite(m21, LOW);
    digitalWrite(m22, LOW);
  }

  delay(100); // Small delay for stability
}
