#ifndef anbn_h
#define anbn_h

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

TM_transition_output anbn(const TM_transition_input& input);

#endif
