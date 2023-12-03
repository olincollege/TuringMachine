#include "palindrome.h"

TM_transition_output palindrome(const TM_transition_input& input) {

    TM_transition_output output;

    if (input.state == 1) {
        if (input.symbol == '0') {
            output.state = 2;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 3;
            output.symbol = 'Y';
            output.move_pointer = 1;
        } else if (input.symbol == 'X' || input.symbol == 'Y' || input.symbol == '_') {
            output.state = 77;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 2) {
        if (input.symbol == '0' || input.symbol == '1') {
            output.state = 2;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        } else if (input.symbol == 'X' || input.symbol == 'Y' || input.symbol == '_') {
            output.state = 4;
            output.symbol = input.symbol;
            output.move_pointer = -1;
        }
    } else if (input.state == 3) {
        if (input.symbol == '0' || input.symbol == '1') {
            output.state = 3;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        } else if (input.symbol == 'X' || input.symbol == 'Y' || input.symbol == '_') {
            output.state = 5;
            output.symbol = input.symbol;
            output.move_pointer = -1;
        }
    } else if (input.state == 4) {
        if (input.symbol == '0') {
            output.state = 6;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == 'X' || input.symbol == 'Y') {
            output.state = 77;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 5) {
        if (input.symbol == '1') {
            output.state = 6;
            output.symbol = 'Y';
            output.move_pointer = -1;
        } else if (input.symbol == 'X' || input.symbol == 'Y') {
            output.state = 77;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 6) {
        if (input.symbol == '0' || input.symbol == '1') {
            output.state = 6;
            output.symbol = input.symbol;
            output.move_pointer = -1;
        } else if (input.symbol == 'X') {
            output.state = 1;
            output.symbol = '1';
            output.move_pointer = 1;
        } else if (input.symbol == 'Y') {
            output.state = 1;
            output.symbol = 'Y';
            output.move_pointer = 1;
        }
    } else {
        output.state = 66;
        output.symbol = input.symbol;
        output.move_pointer = 1;
    }

    return output;
}
