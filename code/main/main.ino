/*
=================================================================================================================

Main script for the Turing Machine

Learn more at: https://olincollege.github.io/pie-2023-03/turing-machine/

Developed by Sparsh Gupta, Mark Belanger, Noah Rand, Will Young, and Joe Leedy
at Olin College of Engineering, 2023.

=================================================================================================================

List of operations currently supported:

- anbn (check whether a string has an equal number of 0s and 1s)
- palindrome (check whether a string of 0s and 1s is a palindrome)
- booleanNot (check whether a string is the boolean NOT/complement of another string)
- booleanOr (check whether a string is the boolean OR output of two other strings)
=================================================================================================================

Sample string input formats or languages accepted by the Turing Machine for operations:

anbn: 00, 1010, 0101, etc. (any string of even length that consists of 0s and 1s)
palindrome: 010, 1001, 111, etc. (any string that consists of 0s and 1s)
booleanNot: #0#1, #110#001, #10#01, etc. (two strings u and v that consist of 0s and 1s in the form #u#v)
booleanOr: #0#1#1, "#101#010#111", etc. (three strings u, v, and w that consist of 0s and 1s in the form #u#v#w)

================================================================================================================
*/

// Imports
#include "Arduino.h"
#include "TM_Motor_Movement.h"
#include "string.h"
#include "transition_struct_type.h"
#include "LiquidCrystal_I2C.h"
#include "anbn.h"
#include "palindrome.h"
#include "boolean_not.h"
#include "boolean_or.h"

//------------------------------------------------------------------------------//
//------------------------------------------------------------------------------//
// Provide the input operation and input string to perform on the Turing Machine
String operation = "anbn";
String inputString = "01";
//------------------------------------------------------------------------------//
//------------------------------------------------------------------------------//



/*==============================================================================*/
// Instantiate TM Class
String bitstring = inputString;
uint8_t film_dc_pin = 3;
uint8_t stepper_pin = 1;
uint8_t eraser_actuation_pin = 6;
uint8_t eraser_control_pin = 4;
uint8_t eraser_actuation_min = 0;
uint8_t eraser_actuation_max = 180;
uint8_t eraser_speed = 255;
uint8_t erase_all_distance = 1000;
uint8_t stepper_total_steps = 200;
uint8_t stepper_move_steps = 4;
uint8_t stepper_speed = 30;
uint8_t dc_film_speed = 120;
uint8_t draw_actuation_servo_pin = 10;
uint8_t draw_control_servo_pin = 9;
uint8_t marker_up_pos = 180;
uint8_t marker_down_pos = 120;
uint8_t head_min_pos = 5;
uint8_t head_max_pos = 75;
uint8_t zero_lines = 2;
uint8_t bit_space = 25;
uint8_t eraser_head_distance = 150;
uint8_t eraser_distance = 130;
uint8_t eraser_to_write_dist = 49;
uint8_t write_to_camera = 125;

TM_Motor_Movement TM(
        bitstring,
        film_dc_pin,
        stepper_pin,
        eraser_actuation_pin,
        eraser_control_pin,
        eraser_actuation_min,
        eraser_actuation_max,
        eraser_speed,
        erase_all_distance,
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
        eraser_to_write_dist,
        write_to_camera
);

/*==============================================================================*/
// LCD display
/*==============================================================================*/
// Instantiate LCD
LiquidCrystal_I2C lcd(0x27,20,4);

void displayOnLCD(String line1, String line2, String line3, String line4) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(line1);
    lcd.setCursor(0, 1);
    lcd.print(line2);
    lcd.setCursor(0, 2);
    lcd.print(line3);
    lcd.setCursor(0, 3);
    lcd.print(line4);
}


/*==============================================================================*/
// Read Symbol
/*==============================================================================*/
char first_bit, second_bit, third_bit;
String symbol_bits;
char symbol;

char readSymbol() {
    // Read first bit and move one symbol forward
    delay(5000);
    first_bit = Serial.read();
    TM.moveOneBitForward();

    // Read second bit and move one symbol forward
    delay(5000);
    second_bit = Serial.read();
    TM.moveOneBitForward();

    // Read third bit and move one symbol forward
    delay(5000);
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

// ---------------------
// anbn state transition
// ---------------------
char stateTransition_anbn() {

    // Defining input and output
    TM_transition_input anbn_input;
    TM_transition_output anbn_output;

    // Initialize start state and read initial symbol
    anbn_input.state = 1;
    anbn_input.symbol = readSymbol();

    displayOnLCD("Turing Machine",
                 "Operation: " + operation,
                 "State: " + anbn_input.state,
                 "Symbol: " + anbn_input.symbol);

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

            // Move pointer based on output
            if (anbn_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }
        else {
            // Just move pointer based on output
            if (anbn_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }

        // Next state and symbol
        anbn_input.state = anbn_output.state;
        anbn_input.symbol = readSymbol();

        displayOnLCD("Turing Machine",
                     "Operation: " + operation,
                     "State: " + anbn_input.state,
                     "Symbol: " + anbn_input.symbol);
    }
}

// ---------------------------
// palindrome state transition
// ---------------------------
char stateTransition_palindrome() {

    // Defining input and output
    TM_transition_input palindrome_input;
    TM_transition_output palindrome_output;

    // Initialize start state and read initial symbol
    palindrome_input.state = 1;
    palindrome_input.symbol = readSymbol();

    displayOnLCD("Turing Machine",
                 "Operation: " + operation,
                 "State: " + palindrome_input.state,
                 "Symbol: " + palindrome_input.symbol);

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

            // Move pointer based on output
            if (palindrome_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }
        else {
            // Just move pointer based on output
            if (palindrome_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }

        // Next state and symbol
        palindrome_input.state = palindrome_output.state;
        palindrome_input.symbol = readSymbol();

        displayOnLCD("Turing Machine",
                     "Operation: " + operation,
                     "State: " + palindrome_input.state,
                     "Symbol: " + palindrome_input.symbol);
    }
}

// ---------------------------
// booleanNot state transition
// ---------------------------
char stateTransition_booleanNot() {

    // Defining input and output
    TM_transition_input booleanNot_input;
    TM_transition_output booleanNot_output;

    // Initialize start state and read initial symbol
    booleanNot_input.state = 1;
    booleanNot_input.symbol = readSymbol();

    displayOnLCD("Turing Machine",
                 "Operation: " + operation,
                 "State: " + booleanNot_input.state,
                 "Symbol: " + booleanNot_input.symbol);

    while (booleanNot_input.state < 100) {
        // Obtain one transition output
        booleanNot_output = booleanNot(booleanNot_input);

        // Halting state: Accept or Reject
        if (booleanNot_output.state == 77) {
            return 'A';
        } else if (booleanNot_output.state == 66) {
            return 'R';
        }

        // Write new symbol or skip drawing if same symbol
        if (booleanNot_input.symbol != booleanNot_output.symbol) {

            // Erase input symbol first
            TM.eraseOneSymbol();

            // Draw output symbol
            drawSymbol(booleanNot_output.symbol);

            // Move pointer based on output
            if (booleanNot_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }
        else {
            // Just move pointer based on output
            if (booleanNot_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }

        // Next state and symbol
        booleanNot_input.state = booleanNot_output.state;
        booleanNot_input.symbol = readSymbol();

        displayOnLCD("Turing Machine",
                     "Operation: " + operation,
                     "State: " + booleanNot_input.state,
                     "Symbol: " + booleanNot_input.symbol);
    }
}


// ---------------------------
// booleanOr state transition
// ---------------------------
char stateTransition_booleanOr() {

    // Defining input and output
    TM_transition_input booleanOr_input;
    TM_transition_output booleanOr_output;

    // Initialize start state and read initial symbol
    booleanOr_input.state = 1;
    booleanOr_input.symbol = readSymbol();

    displayOnLCD("Turing Machine",
                 "Operation: " + operation,
                 "State: " + booleanOr_input.state,
                 "Symbol: " + booleanOr_input.symbol);

    while (booleanOr_input.state < 100) {
        // Obtain one transition output
        booleanOr_output = booleanOr(booleanOr_input);

        // Halting state: Accept or Reject
        if (booleanOr_output.state == 77) {
            return 'A';
        } else if (booleanOr_output.state == 66) {
            return 'R';
        }

        // Write new symbol or skip drawing if same symbol
        if (booleanOr_input.symbol != booleanOr_output.symbol) {

            // Erase input symbol first
            TM.eraseOneSymbol();

            // Draw output symbol
            drawSymbol(booleanOr_output.symbol);

            // Move pointer based on output
            if (booleanOr_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }
        else {
            // Just move pointer based on output
            if (booleanOr_output.move_pointer == 1) {
                TM.moveOneSymbolForward();
            } else {
                TM.moveOneSymbolBackward();
            }
        }

        // Next state and symbol
        booleanOr_input.state = booleanOr_output.state;
        booleanOr_input.symbol = readSymbol();

        displayOnLCD("Turing Machine",
                     "Operation: " + operation,
                     "State: " + booleanOr_input.state,
                     "Symbol: " + booleanOr_input.symbol);
    }
}

// ---------------------------------------------------------------
// Operation state transition
// ---------------------------------------------------------------
char stateTransitionResult; // To return the result of computation
// Select stateTransition TM based on operation
char stateTransition(const String& operation) {
    if (operation == "anbn") {
        stateTransitionResult = stateTransition_anbn();
        return stateTransitionResult;
    }
    else if (operation == "palindrome") {
        stateTransitionResult = stateTransition_palindrome();
        return stateTransitionResult;
    }
    else if (operation == "booleanNot") {
        stateTransitionResult = stateTransition_booleanNot();
        return stateTransitionResult;
    }
    else if (operation == "booleanOr") {
        stateTransitionResult = stateTransition_booleanOr();
        return stateTransitionResult;
    }
    // TODO - add other operations
    else {
        return 'Error';
    }
}


/*==============================================================================*/
// Arduino
/*==============================================================================*/

// To store the output of TM computation
char result;

// Arduino
void setup() {
    // LCD
    lcd.init(); 
    lcd.backlight(); 
    lcd.setCursor(0,0);
    lcd.print("Turing Machine");
    lcd.setCursor(0,1);     
    lcd.print("Operation " + operation);  
    lcd.setCursor(0,2);     
    lcd.print("String " + inputString);  
    lcd.setCursor(0,3);     
    lcd.print("Computing..."); 

    // Setup motor functions
    TM.begin();
    delay(10000);

    // Draw the inputString
    TM.drawAll();

    // Move start of string (first symbol) under camera
    TM.goToCamera();

    // Obtain computation result using State Transition
    result = stateTransition(operation);

    // Display final result on LCD
    String resultMessage;
    if (result == 'A') {
        resultMessage = "Accept";
    } else if (result == 'R') {
        resultMessage = "Reject";
    } else {
        resultMessage = "Error!";
    }

    displayOnLCD("Turing Machine",
                 "Operation " + operation,
                 "String " + inputString,
                 "Result: " + resultMessage);

    // Erase string on tape
    TM.eraseAll();
}

void loop() {
 // Nothing needed
}
