#ifndef TRANSITION_STRUCT_TYPE_H
#define TRANSITION_STRUCT_TYPE_H

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

#endif //TRANSITION_STRUCT_TYPE_H
