#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
}

void loop() {
  // Sweep for 2 seconds
  unsigned long startTime = millis();
  while (millis() - startTime < 2000) {  // Sweep for 2 seconds
    for (int i = 0; i <= 180; i += 10) {  // Forward sweep
      servo1.write(i);
      servo2.write(i);
      servo3.write(i);
      servo4.write(i);
      servo5.write(i);
      servo6.write(i);
      delay(15);  // Small delay for smooth movement
    }
    for (int i = 180; i >= 0; i -= 10) {  // Backward sweep
      servo1.write(i);
      servo2.write(i);
      servo3.write(i);
      servo4.write(i);
      servo5.write(i);
      servo6.write(i);
      delay(15);
    }
  }

  // Hold all motors at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);

  // Stop the loop from repeating
  while (true);
}
