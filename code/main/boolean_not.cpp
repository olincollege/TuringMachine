#include "boolean_not.h"

TM_transition_output booleanNot(const TM_transition_input& input) {
    TM_transition_output output;

    if (input.state == 1) {
        if (input.symbol == '#') {
            output.state = 2;
            output.symbol = '#';
            output.move_pointer = 1;
            return output;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 2) {
        if (input.symbol == '1') {
            output.state = 3;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '0') {
            output.state = 4;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == 'X') {
            output.state = 2;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '#') {
            output.state = 2;
            output.symbol = '#';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '_') {
            output.state = 77;
            output.symbol = '_';
            output.move_pointer = 1;
            return output;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 3) {
        if (input.symbol == '0') {
            output.state = 3;
            output.symbol = '0';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '1') {
            output.state = 3;
            output.symbol = '1';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '#') {
            output.state = 5;
            output.symbol = '#';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '_') {
            output.state = 66;
            output.symbol = '_';
            output.move_pointer = 1;
            return output;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 4) {
        if (input.symbol == '0') {
            output.state = 4;
            output.symbol = '0';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '1') {
            output.state = 4;
            output.symbol = '1';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '#') {
            output.state = 6;
            output.symbol = '#';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '_') {
            output.state = 66;
            output.symbol = '_';
            output.move_pointer = 1;
            return output;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 5) {
        if (input.symbol == '0') {
            output.state = 7;
            output.symbol = 'X';
            output.move_pointer = -1;
            return output;
        } else if (input.symbol == '1') {
            output.state = 66;
            output.symbol = '1';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == 'X') {
            output.state = 5;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 6) {
        if (input.symbol == '0') {
            output.state = 66;
            output.symbol = '0';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '1') {
            output.state = 7;
            output.symbol = 'X';
            output.move_pointer = -1;
            return output;
        } else if (input.symbol == 'X') {
            output.state = 6;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 7) {
        if (input.symbol == 'X') {
            output.state = 7;
            output.symbol = 'X';
            output.move_pointer = -1;
            return output;
        } else if (input.symbol == '#') {
            output.state = 8;
            output.symbol = '#';
            output.move_pointer = -1;
            return output;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 8) {
        if (input.symbol == '0') {
            output.state = 8;
            output.symbol = '0';
            output.move_pointer = -1;
            return output;
        } else if (input.symbol == '1') {
            output.state = 8;
            output.symbol = '1';
            output.move_pointer = -1;
            return output;
        } else if (input.symbol == 'X') {
            output.state = 2;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else {
        output.state = 66;
        output.symbol = input.symbol;
        output.move_pointer = 1;
    }

    return output;
}
