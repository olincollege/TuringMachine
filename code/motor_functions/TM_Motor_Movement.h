
#ifndef TM_Motor_Movement_h
#define TM_Motor_Movement_h

#include "Arduino.h"
#include <Adafruit_MotorShield.h>
#include <Servo.h>

class TM_Motor_Movement
{
  public:
    TM_Motor_Movement(
    String bitstring,
    uint8_t film_dc_pin,
    uint8_t stepper_pin,
    uint8_t eraser_actuation_pin,
    uint8_t eraser_control_pin,
    uint8_t eraser_actuation_min,
    uint8_t eraser_actuation_max,
    uint8_t eraser_speed,
    uint8_t stepper_total_steps,
    uint8_t stepper_move_steps,
    uint8_t stepper_speed,
    uint8_t dc_film_speed,
    uint8_t draw_actuation_servo_pin,
    uint8_t draw_control_servo_pin,
    uint8_t marker_up_pos,
    uint8_t marker_down_pos,
    uint8_t head_min_pos,
    uint8_t head_max_pos,
    uint8_t zero_lines,
    uint8_t bit_space,
    uint8_t eraser_head_distance,
    uint8_t eraser_distance,
    uint8_t eraser_to_draw,
    uint8_t eraser_to_write_dist
    );
    void begin();
    void moveFilmForward();
    void moveFilmBackward();
    void markerDown();
    void markerUp();
    void eraserDown();
    void eraserUp();
    void erase();
    void headPositiveVerticalLine();
    void headNegativeVerticalLine();
    void drawBitZero();
    void drawBitOne();
    void drawZero();
    void drawOne();
    void drawX();
    void drawY();
    void drawBlank();
    void drawHash();
    void moveOneSymbolForward();
    void eraseOneSymbol();
    void moveOneBitForward();
    void moveOneBitBackward();
    void moveOneSymbolBackward();
    void moveToErase();
    void eraseBackward();
    void eraserToWrite();
    void drawAll();
    void goHome();
    

  private:
    Adafruit_MotorShield AFMS;
    Adafruit_StepperMotor *fineFilmControl;
    Adafruit_DCMotor *coarseFilmControl;
    Servo drawingActuation;
    Servo drawingControl;
    Servo eraserActuation;
    Adafruit_DCMotor *eraserControl;
    String start_bitstring;
    uint8_t film_dcM_pin;
    uint8_t stepperM_pin;
    uint8_t eraser_actuationM_pin;
    uint8_t eraser_controlM_pin;
    uint8_t eraser_actuationM_min;
    uint8_t eraser_actuationM_max;
    uint8_t stepperM_total_steps;
    uint8_t stepperM_move_steps;
    uint8_t stepperM_speed;
    uint8_t dcM_film_speed;
    uint8_t draw_actuation_servoM_pin;
    uint8_t draw_control_servoM_pin;
    uint8_t marker_up_posi;
    uint8_t marker_down_posi;
    uint8_t head_min;
    uint8_t head_max;
    uint8_t zero_lines_num;
    uint8_t bit_spacing;
    uint8_t eraserM_speed;
    uint8_t eraserM_to_write_dist;
    uint8_t eraserM_head_distance;
    uint8_t eraserM_distance;

};

#endif