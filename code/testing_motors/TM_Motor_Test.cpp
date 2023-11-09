#include "Arduino.h"
#include <Adafruit_MotorShield.h>
#include "TM_Motor_Test.h"

TM_Motor_Test::TM_Motor_Test(uint8_t dcm_speed) : dc_speed(dcm_speed) {
  AFMS = Adafruit_MotorShield();
  fineFilmControl = AFMS.getStepper(200, 1);
  coarseFilmControl = AFMS.getMotor(3);
}

void TM_Motor_Test::moveFilmForward() {
    fineFilmControl->setSpeed(10);                   // Set stepper speed to 10 rpm
    coarseFilmControl->run(FORWARD);                  // Set DC motors to run forward
    coarseFilmControl->setSpeed(dc_speed);             // Set motor speed and start motor
    fineFilmControl->step(100, FORWARD, MICROSTEP);   //rotate stepper half a turn
    coarseFilmControl->setSpeed(0);                    // Stop motor
}

void TM_Motor_Test::moveFilmBackward() {
    fineFilmControl->setSpeed(10);                    // Set stepper speed to 10 rpm
    coarseFilmControl->run(BACKWARD);                  // Set DC motors to run forward
    coarseFilmControl->setSpeed(dc_speed);             // Set motor speed and start motor
    fineFilmControl->step(100, BACKWARD, MICROSTEP);  // rotate stepper half a turn
    coarseFilmControl->setSpeed(0);                    // Stop motor
}