#include "addition.h"

TM_transition_output addition(const TM_transition_input& input) {

    TM_transition_output output;

    if (input.state == 1) {
        if (input.symbol == '#') {
            output.state = 2;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 2) {
        if (input.symbol == '0' || input.symbol == '1') {
            output.state = 2;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 3;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 3) {
        if (input.symbol == '0') {
            output.state = 16;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 4;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 3;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 77;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 4) {
        if (input.symbol == 'X') {
            output.state = 4;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 5;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 5) {
        if (input.symbol == '0') {
            output.state = 5;
            output.symbol = '0';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 5;
            output.symbol = '1';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 6;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 6;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 6) {
        if (input.symbol == '0') {
            output.state = 7;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 11;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 7) {
        if (input.symbol == 'X') {
            output.state = 7;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 8;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 8) {
        if (input.symbol == '0') {
            output.state = 8;
            output.symbol = '0';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 8;
            output.symbol = '1';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 9;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '_') {
            output.state = 9;
            output.symbol = '_';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 9) {
        if (input.symbol == '1') {
            output.state = 10;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 10) {
        if (input.symbol == '0') {
            output.state = 10;
            output.symbol = '0';
            output.move_pointer = -1;
        } else if (input.symbol == '1') {
            output.state = 10;
            output.symbol = '1';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 15;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 11) {
        if (input.symbol == 'X') {
            output.state = 11;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 12;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 12) {
        if (input.symbol == '0') {
            output.state = 12;
            output.symbol = '0';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 12;
            output.symbol = '1';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 13;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '_') {
            output.state = 13;
            output.symbol = '_';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 13) {
        if (input.symbol == '0') {
            output.state = 14;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 14) {
        if (input.symbol == '0') {
            output.state = 14;
            output.symbol = '0';
            output.move_pointer = -1;
        } else if (input.symbol == '1') {
            output.state = 14;
            output.symbol = '1';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 23;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 15) {
        if (input.symbol == '0') {
            output.state = 15;
            output.symbol = '0';
            output.move_pointer = -1;
        } else if (input.symbol == '1') {
            output.state = 15;
            output.symbol = '1';
            output.move_pointer = -1;
        } else if (input.symbol == 'X') {
            output.state = 15;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 3;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 16) {
        if (input.symbol == 'X') {
            output.state = 16;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 17;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 17) {
        if (input.symbol == '0') {
            output.state = 17;
            output.symbol = '0';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 17;
            output.symbol = '1';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 18;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 18;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 19) {
        if (input.symbol == 'X') {
            output.state = 19;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 20;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 20) {
        if (input.symbol == '0') {
            output.state = 20;
            output.symbol = '0';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 20;
            output.symbol = '1';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 21;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '_') {
            output.state = 21;
            output.symbol = '_';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 21) {
        if (input.symbol == '1') {
            output.state = 22;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 22) {
        if (input.symbol == '0') {
            output.state = 22;
            output.symbol = '0';
            output.move_pointer = -1;
        } else if (input.symbol == '1') {
            output.state = 22;
            output.symbol = '1';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 15;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 23) {
        if (input.symbol == '0') {
            output.state = 23;
            output.symbol = '0';
            output.move_pointer = -1;
        } else if (input.symbol == '1') {
            output.state = 23;
            output.symbol = '1';
            output.move_pointer = -1;
        } else if (input.symbol == 'X') {
            output.state = 23;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 24;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 24) {
        if (input.symbol == '0') {
            output.state = 25;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 37;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 24;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 25) {
        if (input.symbol == 'X') {
            output.state = 25;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 26;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 26) {
        if (input.symbol == '0') {
            output.state = 26;
            output.symbol = '0';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 26;
            output.symbol = '1';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 27;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 27) {
        if (input.symbol == '0') {
            output.state = 28;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 44;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 28) {
        if (input.symbol == 'X') {
            output.state = 28;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 29;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 29) {
        if (input.symbol == '0') {
            output.state = 29;
            output.symbol = '0';
            output.move_pointer = 1;
        } else if (input.symbol == '1') {
            output.state = 29;
            output.symbol = '1';
            output.move_pointer = 1;
        } else if (input.symbol == 'X') {
            output.state = 30;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 30) {
        if (input.symbol == '1') {
            output.state = 31;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 31) {
        if (input.symbol == '0') {
            output.state = 31;
            output.symbol = '0';
            output.move_pointer = -1;
        } else if (input.symbol == '1') {
            output.state = 31;
            output.symbol = '1';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 32;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 32) {
        if (input.symbol == '0') {
            output.state = 32;
            output.symbol = '0';
            output.move_pointer = -1;
        } else if (input.symbol == '1') {
            output.state = 32;
            output.symbol = '1';
            output.move_pointer = -1;
        } else if (input.symbol == 'X') {
            output.state = 32;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '#') {
            output.state = 3;
            output.symbol = '#';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 33) {
        if (input.symbol == 'X') {
            output.state = 33;
            output.symbol = 'X';
            output.move_pointer = 1;
        } else if (input.symbol == '#') {
            output.state = 34;
            output.symbol = '#';
            output.move_pointer = 1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } else if (input.state == 34) {
        if (input.symbol == 'X') {
            output.state = 35;
            output.symbol = 'X';
            output.move_pointer = -1;
        } else if (input.symbol == '_') {
            output.state = 35;
            output.symbol = '_';
            output.move_pointer = -1;
        } else {
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
        }
    } 
    else {
        output.state = 66;
        output.symbol = input.symbol;
        output.move_pointer = 1;
    }

    return output;
}
