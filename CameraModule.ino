#include <Servo.h>

Servo servo;

const int SERVO_PIN = D7;
const int REVERSE_SIGNAL = D6;

unsigned long reverseSignalEndTime = 0;
bool reverseActive = false;
bool lidOpen = false;

void setup() {
  servo.attach(SERVO_PIN);
  pinMode(REVERSE_SIGNAL, INPUT_PULLUP);
  servo.write(0);  // Ensure the lid is initially closed
}

void loop() {
  if (digitalRead(REVERSE_SIGNAL) == HIGH) {
    // Reverse signal is active
    if (!reverseActive) {
      servo.write(180);  // Open the lid
      lidOpen = true;
      reverseActive = true;
    }
    reverseSignalEndTime = millis();  // Reset the end time while the signal is active
  } else {
    // Reverse signal is not active
    if (reverseActive) {
      reverseActive = false;
      reverseSignalEndTime = millis();  // Mark the time when the signal went LOW
    }
  }

  // Check if the lid should close after 15 seconds
  if (lidOpen && (millis() - reverseSignalEndTime > 15000)) {
    servo.write(0);  // Close the lid
    lidOpen = false;
  }
}
