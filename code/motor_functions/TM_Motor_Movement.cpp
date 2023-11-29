#include "Arduino.h"
#include <Adafruit_MotorShield.h>
#include "TM_Motor_Movement.h"
#include <Servo.h>

TM_Motor_Movement::TM_Motor_Movement(
    uint8_t film_dc_pin,
    uint8_t stepper_pin,
    uint8_t eraser_pin,
    uint8_t eraser_min,
    uint8_t eraser_max,
    uint8_t stepper_total_steps,
    uint8_t stepper_move_steps,
    uint8_t stepper_speed,
    uint8_t dc_film_speed,
    uint8_t draw_actuation_servo_pin,
    uint8_t draw_control_servo_pin,
    uint8_t marker_up_pos,
    uint8_t marker_down_pos,
    uint8_t head_min_pos,
    uint8_t head_max_pos) : 

  film_dcM_pin(film_dc_pin),
  dcM_film_speed(dc_film_speed), 

  stepperM_pin(stepper_pin),
  stepperM_total_steps(stepper_total_steps),
  stepperM_move_steps(stepper_move_steps),
  stepperM_speed(stepper_speed),

  eraserM_pin(eraser_pin),
  eraserM_min(eraser_min),
  eraserM_max(eraser_max),

  draw_actuation_servoM_pin(draw_actuation_servo_pin),
  draw_control_servoM_pin(draw_control_servo_pin),
  marker_down_posi(marker_down_pos),
  marker_up_posi(marker_up_pos),
  head_min(head_min_pos),
  head_max(head_max_pos)

  {

  };

  void TM_Motor_Movement::begin() {
    Serial.begin(9600);
    AFMS = Adafruit_MotorShield();
    Serial.println("MotorShield Found!");
    fineFilmControl = AFMS.getStepper(stepperM_total_steps, stepperM_pin);
    Serial.println("Stepper Found!");
    coarseFilmControl = AFMS.getMotor(film_dcM_pin);
    Serial.println("DC Motors Found!");
    //eraserControl = AFMS.getMotor(eraserM_pin);
    drawingActuation.attach(draw_actuation_servoM_pin);
    drawingActuation.write(marker_up_posi);
    delay(100);
    Serial.println("Drawing acuation home!");
    drawingControl.attach(draw_control_servoM_pin);
    drawingControl.write(head_max);
    delay(100);
    Serial.println("Drawing control home!");
    AFMS.begin();
    Serial.println("Initiation Successful!");
  }

  void TM_Motor_Movement::moveFilmForward() {
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(stepperM_move_steps, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
    Serial.println("Film Forward!");
  }

  void TM_Motor_Movement::moveFilmBackward() {
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(stepperM_move_steps, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0); 
    delay(500);
    Serial.println("Film Backward!");

  }

  void TM_Motor_Movement::markerDown() {
    drawingActuation.write(marker_down_posi);
    delay(100);
    Serial.println("Marker Down!");
  }

  void TM_Motor_Movement::markerUp() {
    drawingActuation.write(marker_up_posi);
    delay(100);
    Serial.println("Marker Up!");
    
  }

  void TM_Motor_Movement::eraserDown() {

  }

  void TM_Motor_Movement::eraserUp() {

  }

  void TM_Motor_Movement::headPositiveVerticalLine() {
    drawingControl.write(head_max);
    delay(500);
    Serial.println("Positive Line!");
  }

  void TM_Motor_Movement::headNegativeVerticalLine() {
    drawingControl.write(head_min);
    delay(500);
    Serial.println("Negative Line!");
  }

  void TM_Motor_Movement::erase() {
    eraserDown();
    //STUFF
    eraserUp();
  }

  void TM_Motor_Movement::drawOne() {
    markerDown();
    headPositiveVerticalLine();
    markerUp();
    headNegativeVerticalLine();

  }

  void TM_Motor_Movement::drawZero() {
    markerDown();
    headPositiveVerticalLine();
    moveFilmForward();
    headNegativeVerticalLine();
    moveFilmBackward();
    markerUp();
  }

  void TM_Motor_Movement::drawX() {

  }

  void TM_Motor_Movement::drawY() {

  }

  void TM_Motor_Movement::drawBlank() {

  }

  void TM_Motor_Movement::drawHash() {

  }

  void TM_Motor_Movement::drawArrow() {

  }


  



  