/*
  TM_Motor_Test_h - Library for testing the speed of the
  DC motors relative to the stepper motors on the Turing
  Machine.
*/
#ifndef TM_Motor_Test_h
#define TM_Motor_Test_h

#include "Arduino.h"
#include <Adafruit_MotorShield.h>

class TM_Motor_Test
{
  public:
    TM_Motor_Test(uint8_t dcm_speed);
    void moveFilmForward();
    void moveFilmBackward();
  private:
    Adafruit_MotorShield AFMS;
    Adafruit_StepperMotor *fineFilmControl;
    Adafruit_DCMotor *coarseFilmControl;
    uint8_t dc_speed;
};

#endif