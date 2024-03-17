#include <Servo.h>

Servo servo;

SERVO_PIN = D7
REVERSE_SIGNAL = D6

void setup() {
  servo.attach(SERVO_PIN);
  pinMode(REVERSE_SIGNAL, INPUT);

  while(digitalRead(REVERSE_SIGNAL) == HIGH) {
    servo.write(180);

    //Hold the servo in the reverse position for 10 seconds
    sleep(10000);
  }
}