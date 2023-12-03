#include <Arduino.h>
#include "state_transition.h"
#include "transition_struct_type.h"
#include "read_symbol.h"
#include "TM_Motor_Movement.h"
#include "string.h"
#include "anbn.h"
#include "palindrome.h"

// Instantiate TM Class
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

char stateTransition_anbn();
char stateTransition_palindrome();
char stateTransition(const String& operation);

// Function to choose which draw function to use for symbol
void drawSymbol(char symbol_to_draw) {
    if (symbol_to_draw == 'X') {
        TM.drawX();
    } else if (symbol_to_draw == 'Y') {
        TM.drawY();
    } else if (symbol_to_draw == '_') {
        TM.drawBlank();
    }
}

// anbn state transition
char stateTransition_anbn() {

    // Defining input and output
    TM_transition_input anbn_input;
    TM_transition_output anbn_output;

    // Initialize start state and read initial symbol
    anbn_input.state = 1;
    anbn_input.symbol = readSymbol();

    while (anbn_input.state < 100) {
        // Obtain one transition output
        anbn_output = anbn(anbn_input);

        // Halting state: Accept or Reject
        if (anbn_output.state == 77) {
            return 'A';
        } else if (anbn_output.state == 66) {
            return 'R';
        }

        // Write new symbol or skip drawing if same symbol
        if (anbn_input.symbol != anbn_output.symbol) {

            // Erase input symbol first
            TM.eraseOneSymbol();

            // Draw output symbol
            drawSymbol(anbn_output.symbol);

            // Move pointer based on anbn_output
            if (anbn_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }
        else {
            // Just move pointer based on anbn_output
            if (anbn_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }

        // Next state and symbol
        anbn_input.state = anbn_output.state;
        anbn_input.symbol = readSymbol();
    }
}


// palindrome state transition
char stateTransition_palindrome() {

    // Defining input and output
    TM_transition_input palindrome_input;
    TM_transition_output palindrome_output;

    // Initialize start state and read initial symbol
    palindrome_input.state = 1;
    palindrome_input.symbol = readSymbol();

    while (palindrome_input.state < 100) {
        // Obtain one transition output
        palindrome_output = palindrome(palindrome_input);

        // Halting state: Accept or Reject
        if (palindrome_output.state == 77) {
            return 'A';
        } else if (palindrome_output.state == 66) {
            return 'R';
        }

        // Write new symbol or skip drawing if same symbol
        if (palindrome_input.symbol != palindrome_output.symbol) {

            // Erase input symbol first
            TM.eraseOneSymbol();

            // Draw output symbol
            drawSymbol(palindrome_output.symbol);

            // Move pointer based on anbn_output
            if (palindrome_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }
        else {
            // Just move pointer based on anbn_output
            if (palindrome_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }

        // Next state and symbol
        palindrome_input.state = palindrome_output.state;
        palindrome_input.symbol = readSymbol();
    }
}


char result; // To return the result of computation
// Select stateTransition TM based on operation
char stateTransition(const String& operation) {
    if (operation == "anbn") {
        result = stateTransition_anbn();
        return result;
    } else if (operation == "palindrome") {
        result = stateTransition_palindrome();
        return result;
    }
    // TODO - add other operations later
    else {
        return 'R';
    }
}


