#include "TM_Motor_Movement.h"

uint8_t film_dc_pin = 3;
uint8_t stepper_pin = 1;
uint8_t eraser_actuation_pin = 8;                     // Placeholder
uint8_t eraser_control_pin = 3;
uint8_t eraser_min = 90;                     // Placeholder
uint8_t eraser_max = 180;                     // Placeholder
uint8_t eraser_speed = 255;
uint8_t stepper_total_steps = 200;
uint8_t stepper_move_steps = 20;
uint8_t stepper_speed = 10;
uint8_t dc_film_speed = 200;
uint8_t draw_actuation_servo_pin = 10;
uint8_t draw_control_servo_pin = 9;
uint8_t marker_up_pos = 180;
uint8_t marker_down_pos = 90;
uint8_t head_min_pos = 10;
uint8_t head_max_pos = 85;
uint8_t zero_lines = 4;
uint8_t symbol_space = 20;

TM_Motor_Movement TM(
  film_dc_pin,
  stepper_pin,
  eraser_actuation_pin,
  eraser_control_pin,
  eraser_min,
  eraser_max,
  stepper_total_steps,
  stepper_move_steps,
  stepper_speed,
  dc_film_speed,
  draw_actuation_servo_pin,
  draw_control_servo_pin,
  marker_up_pos,
  marker_down_pos,
  head_min_pos,
  head_max_pos,
  zero_lines,
  symbol_space,
  eraser_speed
);

void setup() {
  // put your setup code here, to run once:
  TM.begin();
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  TM.headPositiveVerticalLine();
  delay(2000);
  TM.headNegativeVerticalLine();
  delay(2000);
}