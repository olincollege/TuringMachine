#ifndef palindrome_h
#define palindrome_h

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

TM_transition_output palindrome(const TM_transition_input& input);

#endif
