#include "ServoParachute.h"

ServoParachute parachute(13, 1500);

void setup() {
  parachute.openParachute();
}

void loop() {}


// # The parachute thing
//  - Servo Red > Red > 3V3
//  - Servo Brown > Brown > GND
//  - Servo Yellow > Black > D13
