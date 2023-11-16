#include "TM_Motor_test.h"
#include <Servo.h>

// Test the speed of the DC motors and stepper so that
// course and fine film movement can be synchronized

uint8_t dc_speed = 255;
Servo servo1;
Servo servo2;

TM_Motor_Test tapeActuation(dc_speed);

void setup() {
  tapeActuation.begin();
  servo1.attach(9);
  servo2.attach(10);

}

void loop() {
  tapeActuation.moveFilmForward();
  servo1.write(7);
  servo2.write(180);
  // Serial.println("7");
  delay(2000);
  // Serial.println("text");
  tapeActuation.moveFilmBackward();
  servo1.write(90);
  servo2.write(90);
  delay(2000);
}