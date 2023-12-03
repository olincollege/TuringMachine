#include "anbn.h"

TM_transition_output anbn(const TM_transition_input& input) {
    TM_transition_output output;

    if (input.state == 1) {
        if (input.symbol == '0') {
            output.state = 2;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '_') {
            output.state = 77;
            output.symbol = '_';
            output.move_pointer = 1;
            return output;
        }
    } else if (input.state == 2) {
        if (input.symbol == '0') {
            output.state = 2;
            output.symbol = '0';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '1') {
            output.state = 4;
            output.symbol = 'Y';
            output.move_pointer = -1;
            return output;
        } else if (input.symbol == 'Y') {
            output.state = 2;
            output.symbol = 'Y';
            output.move_pointer = 1;
            return output;
        }
    } else if (input.state == 4) {
        if (input.symbol == '0') {
            output.state = 7;
            output.symbol = '0';
            output.move_pointer = -1;
            return output;
        } else if (input.symbol == 'X') {
            output.state = 6;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == 'Y') {
            output.state = 4;
            output.symbol = 'Y';
            output.move_pointer = -1;
            return output;
        }
    } else if (input.state == 6) {
        if (input.symbol == 'Y') {
            output.state = 6;
            output.symbol = 'Y';
            output.move_pointer = 1;
            return output;
        } else if (input.symbol == '_') {
            output.state = 77;
            output.symbol = '_';
            output.move_pointer = 1;
            return output;
        }
    } else if (input.state == 7) {
        if (input.symbol == '0') {
            output.state = 7;
            output.symbol = '0';
            output.move_pointer = -1;
            return output;
        } else if (input.symbol == 'X') {
            output.state = 1;
            output.symbol = 'X';
            output.move_pointer = 1;
            return output;
        }
    } else {
        output.state = 66;
        output.symbol = input.symbol;
        output.move_pointer = 1;
    }
}
