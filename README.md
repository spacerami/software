<img src="https://spacerami.github.io/resc/logo.png" width="200px">

# Spacerami software

> Currently the Spacerami satelite is not compleated (software as well)

1. Servo Parachute is used like :
```cpp
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
```

