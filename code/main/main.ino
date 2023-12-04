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
#include "TM_Motor_Movement.h"
#include "string.h"
#include "transition_struct_type.h"
#include "anbn.h"
#include "palindrome.h"

//------------------------------------------------------------------------------//
//------------------------------------------------------------------------------//
// Provide the input operation and input string to perform on the Turing Machine
String operation = "";
String inputString = "";
//------------------------------------------------------------------------------//
//------------------------------------------------------------------------------//



/*==============================================================================*/
// Instantiate TM Class
String bitstring = inputString;
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

/*==============================================================================*/
// Read Symbol
/*==============================================================================*/
char first_bit, second_bit, third_bit;
String symbol_bits;
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
    if (strcmp(symbol_bits.c_str(), "000") == 0) {
        symbol = '#';
    } else if (strcmp(symbol_bits.c_str(), "010") == 0) {
        symbol = '0';
    } else if (strcmp(symbol_bits.c_str(), "011") == 0) {
        symbol = '1';
    } else if (strcmp(symbol_bits.c_str(), "101") == 0) {
        symbol = 'X';
    } else if (strcmp(symbol_bits.c_str(), "110") == 0) {
        symbol = 'Y';
    } else if (strcmp(symbol_bits.c_str(), "111") == 0) {
        symbol = '_';
    } else {
        symbol = 'E';
    }

    return symbol;
}

/*==============================================================================*/
// State Transition
/*==============================================================================*/

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


char stateTransitionResult; // To return the result of computation
// Select stateTransition TM based on operation
char stateTransition(const String& operation) {
    if (operation == "anbn") {
        stateTransitionResult = stateTransition_anbn();
        return stateTransitionResult;
    } else if (operation == "palindrome") {
        stateTransitionResult = stateTransition_palindrome();
        return stateTransitionResult;
    }
        // TODO - add other operations later
    else {
        return 'R';
    }
}


/*==============================================================================*/
// Arduino
/*==============================================================================*/
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
