#include "TM_Motor_test.h"

// Test the speed of the DC motors and stepper so that
// course and fine film movement can be synchronized

uint8_t dc_speed = 255;


TM_Motor_Test tapeActuation(dc_speed);

void setup() {
  tapeActuation.begin();
}

void loop() {
  tapeActuation.moveFilmForward();
  delay(2000);
  Serial.println("text");
  tapeActuation.moveFilmBackward();
  delay(2000);
}