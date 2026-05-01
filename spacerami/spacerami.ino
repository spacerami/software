#include "ServoParachute.h"

ServoParachute parachute(13, 1500);

void setup() {
  parachute.openParachute();
}

void loop() {}


// # The parachute thing
//  - Red > 3V3
//  - Brown > GND
//  - Black > D13