#include "anbn.h"

// Define types for state transition
struct TM_transition_input {
    unsigned short int state;
    char symbol;
};
struct TM_transition_output {
    unsigned short int state;
    char symbol;
    short int move_pointer;
};

TM_transition_output anbn(const TM_transition_input& input) {

    TM_transition_output output;

    switch (input) {
        case (input.state == 1 && input.symbol == "0"):
            output.state = 2;
            output.symbol = "X";
            output.move_pointer = 1;
            return output;

        case (input.state == 1 && input.symbol == "_"):
            output.state = 77;
            output.symbol = "_";
            output.move_pointer = 1;
            return output;

        case (input.state == 2 && input.symbol == "0"):
            output.state = 2;
            output.symbol = "0";
            output.move_pointer = 1;
            return output;

        case (input.state == 2 && input.symbol == "Y"):
            output.state = 2;
            output.symbol = "Y";
            output.move_pointer = 1;
            return output;

        case (input.state == 2 && input.symbol == "1"):
            output.state = 4;
            output.symbol = "Y";
            output.move_pointer = -1;
            return output;

        case (input.state == 4 && input.symbol == "Y"):
            output.state = 4;
            output.symbol = "Y";
            output.move_pointer = -1;
            return output;

        case (input.state == 4 && input.symbol == "0"):
            output.state = 7;
            output.symbol = "0";
            output.move_pointer = -1;
            return output;

        case (input.state == 4 && input.symbol == "X"):
            output.state = 6;
            output.symbol = "X";
            output.move_pointer = 1;
            return output;

        case (input.state == 6 && input.symbol == "Y"):
            output.state = 6;
            output.symbol = "Y";
            output.move_pointer = 1;
            return output;

        case (input.state == 6 && input.symbol == "_"):
            output.state = 77;
            output.symbol = "_";
            output.move_pointer = 1;
            return output;

        case (input.state == 7 && input.symbol == "0"):
            output.state = 7;
            output.symbol = "0";
            output.move_pointer = -1;
            return output;

        case (input.state == 7 && input.symbol == "X"):
            output.state = 1;
            output.symbol = "X";
            output.move_pointer = 1;
            return output;

        default:
            output.state = 66;
            output.symbol = input.symbol;
            output.move_pointer = 1;
    }
}