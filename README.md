Printf
Overview: This paper explains how \_printf works, and how to design the proper formatting specification.

Usage
Include main.h Call \_printf, it writes desired output to stdout Upon error, it returns -1 If NULL is passed in as a string argument, it prints (null) Format Specifier.

Format
%c print a single character.

%d print a decimal (base 10) number.

%i print an integer in base 10.

%s print a string of characters.

%b Prints a binary number.

Example Usage
To use the \_printf function you simply need to compile all files .c including the header main.h with a main function.

Example:
main.c

'#include "main.h"

int main(void) { \_printf("let's print something using our function!");

return (0); }

Compilation:

/ $ gcc \*.c -o

Output:

let's print something using our function!

Files
File Name Description (\_printf.c) produces output according to a format

Running the tests
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \*.c

$ ./a.out

About
Created on Ubuntu 20.04.3 LTS

Compiled with gcc , using flags: -Wall -Werror -Wextra and -pedantic

Author Benhazemnour
