#include "ServoParachute.h"

ServoParachute::ServoParachute(int pin, int centerPulse) {
  _servoPin = pin;
  _centerThing = centerPulse;
}

void ServoParachute::openParachute() {
  pinMode(_servoPin, OUTPUT);

  // Move to CENTER (release)
  for (int i = 0; i < 50; i++) {
    sendPulse(_centerThing);
    delay(20); // keep servo stable
  }

  // Stop signal
  pinMode(_servoPin, INPUT);
}

void ServoParachute::sendPulse(int pulseWidth) {
  digitalWrite(_servoPin, HIGH);
  delayMicroseconds(pulseWidth);
  digitalWrite(_servoPin, LOW);
  delayMicroseconds(20000 - pulseWidth);
}
