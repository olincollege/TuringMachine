#include "TM_Motor_Movement.h"

String bitstring ="0110";
uint8_t film_dc_pin = 3;
uint8_t stepper_pin = 1;
uint8_t eraser_actuation_pin = 8;                     // Placeholder
uint8_t eraser_control_pin = 3;
uint8_t eraser_actuation_min = 90;
uint8_t eraser_actuation_max = 180;
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
uint8_t bit_space = 20;
uint8_t eraser_head_distance = 100;
uint8_t eraser_distance = 50;
uint8_t eraser_to_draw = 50;
uint8_t eraser_to_write_dist = 50;

TM_Motor_Movement TM(
    bitstring,
    film_dc_pin,
    stepper_pin,
    eraser_actuation_pin,
    eraser_control_pin,
    eraser_actuation_min,
    eraser_actuation_max,
    eraser_speed,
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
    bit_space,
    eraser_head_distance,
    eraser_distance,
    eraser_to_draw,
  eraser_to_write_dist
);

void setup() {
//   // put your setup code here, to run once:
  TM.begin();
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  TM.headPositiveVerticalLine();
  delay(2000);
  TM.headNegativeVerticalLine();
  delay(2000);
  TM.drawOne();
  delay(2000);
  TM.drawZero();
  delay(2000);
  TM.drawBlank();
  delay(2000);
  TM.drawX();
  delay(2000);
  TM.drawY();
  delay(2000);
  TM.eraseOneSymbol();
  delay(2000);
  TM.moveOneSymbolForward();
  delay(2000);
  TM.drawAll();
  delay(2000);
  TM.goHome();
  delay(2000);
}