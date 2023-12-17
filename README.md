# Turing Machine

**Developed by:** Sparsh Gupta, Mark Belanger, Noah Rand, Joe Leedy, Will Young

Developed at Olin College of Engineering for the Principles of Integrated Engineering (Fall 2023) final project.


### About
This project is a physical electromechanical implementation of a [Universal Turing Machine](https://en.wikipedia.org/wiki/Universal_Turing_machine) that currently supports basic Turing-computational operations and a few Turing-complete languages.

It could be modified easily to support more Turing-computable operations and Turing-complete languages.

Learn more at: https://olincollege.github.io/pie-2023-03/turing-machine/

### Operations
List of operations currently supported:

- **anbn** (check whether a string has an equal number of 0s and 1s)
- **palindrome** (check whether a string of 0s and 1s is a palindrome)
- **booleanNot** (check whether a string is the boolean NOT/complement of another string)
- **booleanOr** (check whether a string is the boolean OR output of two other strings)
- **addition** (check whether a string is the binary addition output of two other strings)

### Strings/Language

Sample string input formats or languages accepted by the Turing Machine for operations:

**anbn**: 00, 1010, 0110, etc. (any string of even length that consists of 0s and 1s)

**palindrome**: 010, 1001, 111, etc. (any string that consists of 0s and 1s)

**booleanNot**: #0#1, #110#001, #10#01, etc. (two strings u and v that consist of 0s and 1s in the form #u#v 
such that (NOT u = v))

**booleanOr**: #0#1#1, "#101#010#111", etc. (three strings u, v, and w that consist of 0s and 1s in the form #u#v#w 
such that (u OR v = w))

**addition**: #0#1#1, #01#01#10, #101#010#111, etc. (three strings u, v, and w that consist of 0s and 1s in the form #u#v#w 
such that (u + v = w))

### Brief structure of repo

**CAD** directory houses all the design, fabrication, and mechanical aspects of the project.

**code** directory contains the entire codebase for simulating the Turing Machine. The subdirectory **main** contains the code flashed to Arduino UNO for motor functions,
state transition, and state transition operations. The subdirectory **symbol_recognition** contains the code for classifying the bits written on tape and is flashed to the ESP32-Cam.

**website** directory contains the entire code for our hosted website.
