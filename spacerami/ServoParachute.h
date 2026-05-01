#ifndef SERVO_PARACHUTE_H
#define SERVO_PARACHUTE_H

#include <Arduino.h>

class ServoParachute {
  public:
    ServoParachute(int pin, int centerPulse);

    void openParachute();

  private:
    int _servoPin;
    int _centerThing;

    void sendPulse(int pulseWidth);
};

#endif
