/*
======================================================================================

Main script for the Turing Machine

Learn more at: https://olincollege.github.io/pie-2023-03/turing-machine/

Developed by Sparsh Gupta, Mark Belanger, Noah Rand, Will Young, and Joe Leedy
at Olin College of Engineering, 2023.

======================================================================================

List of operations currently supported:

- anbn (check whether a string has an equal number of 0s and 1s)
- palindrome (check whether a string of 0s and 1s is a palindrome)
======================================================================================

Sample string input formats for operations:

anbn: 00, 1010, 0101, etc. (any string of even length that consists of 0s and 1s)
palindrome: 010, 1001, 111, etc. (any string that consists of 0s and 1s)

======================================================================================
*/

// Imports
#include "Arduino.h"
#include "state_transition.h"
#include "TM_Motor_Movement.h"
#include "string.h"

//------------------------------------------------------------------------------//
//------------------------------------------------------------------------------//
// Provide the input operation and input string to perform on the Turing Machine
String operation = "";
String inputString = "";
//------------------------------------------------------------------------------//
//------------------------------------------------------------------------------//




/*==============================================================================*/
// Instantiate TM Class
String bitstring = "000";
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

// To store the output of TM computation
char result;

// Arduino
void setup() {
    // TODO - Draw the inputString

    // TODO - Move to start of string (first symbol)
}

// Flag to limit execution to one computation
uint8_t flag = 1;

void loop() {

    if (flag == 1) {
        // Obtain computation result using State Transition
        result = stateTransition(operation);

        // Increment flag to not allow running computation again after one run
        flag += 1;
    }
    else {
        // TODO - do something to indicate inputting new operation and/or string
    }

    // TODO - do something with result
}
