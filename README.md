# ISNS
## Interpreter for Simple Neuron-network Simulations

ISNS is an interpreter made as part of my diploma work. It was written in C++, using the relatively new C++ runtime library of antlr4.
You can use the makefile included in the repository to compile the sources. The antlr4 runtime library and C++14 are the only dependencies. For the former, visit the [github page of antlr4](https://github.com/antlr/antlr4), and follow the instructions there to install it.

To use the interpreter simply run it with the following command: "*./isns **<input.sns>** *".

## Features
The language itself is relatively easy to understand as it follows a C like syntax:
1. Variables can be declared, as one the following types: **INT**, **STR**, **FRAC**, **BYTE**. Also, there is a special **VOID** type for functions, similar to other programming languages.
2. Functions can be declared as well, and called at other points of the program.
3. The types mention earlier stands for the following:
⋅⋅* **INT** stands for Integer, a whole number.
⋅⋅* **STR** stands for String, a chain of characters.
⋅⋅* **FRAC** stands for Fraction, a whole or non-whole number, like double in C.
⋅⋅* **BYTE** stands for an 8-bit binary number (0-255), represented in binary.
4. The language provides the well known programming loops and decision making, it supports the following:
⋅⋅* *while* loops.
⋅⋅* *for* loops.
⋅⋅* *if/else* blocks.
5. ISNS supports importing, you can import other sources by using the *import **<PATH>*** statement in the beginning of your code.
6. Variable shadowing is also featured: variables and functions can be overwritten in any sub-scopes, and any modification or reference will use the most specific variable or function, leaving the same references unmodified in the super-scopes. Using the same reference within the same scope for declaration is forbidden.

### The full, formal syntax can be found in the *antlr/ISNS.g4* grammar file.
### Short example inputs can be found in the *examples* folder.
