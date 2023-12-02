#include "read_symbol.h"
#include "motor_functions/TM_Motor_Movement.h"
#include <string> 
using namespace std;

// Instantiate TM Class
uint8_t film_dc_pin = 3;
uint8_t stepper_pin = 1;
uint8_t eraser_actuation_pin = 8;
uint8_t eraser_control_pin = 3;
uint8_t eraser_actuation_min = 90;
uint8_t eraser_actuation_max = 180;
uint8_t eraser_min = 90;
uint8_t eraser_max = 180;
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

char first_bit, second_bit, third_bit;
string symbol_bits;
char symbol;

char readSymbol() {
  // Read first bit and move one symbol forward
  first_bit = Serial.read();
  TM.moveOneBitForward();

  delay(2000);

  // Read second bit and move one symbol forward
  second_bit = Serial.read();
  TM.moveOneBitForward();

  delay(2000);

  // Read third bit and move one symbol forward
  third_bit = Serial.read();

  // create symbol bitstring
  symbol_bits = first_bit + second_bit + third_bit;

  // Map to symbol
  switch (symbol_bits) {

    case "000":
      symbol = "#";
      break;

    case "010":
      symbol = "0";
      break;

    case "011":
      symbol = "1";
      break;

    case "101":
      symbol = "X";
      break;

    case "110":
      symbol = "Y";
      break;

    case "111":
      symbol = "_";
      break;
    
    default:  // in case error happens in reading
      symbol = "E";
      break;
  }

  return symbol;
}