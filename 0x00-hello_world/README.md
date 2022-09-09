This project contains script that

0. Runs a C file through the preprocessor and save the result into another file.
**Requirements**
The C file name will be saved in the variable $CFILE
The output should be saved in the file c 

1. Compiles a C file but does not link.
**Requirement** 
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o

2. Generates the assembly code of a C code and save it in an output file.
**Requirements**
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s 

3. Compiles a C file and creates an executable named cisfun.

**Requirement**:The C file name will be saved in the variable $CFILE.

4. Prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
**Requirements**
* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0.

5. Prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
**Requirements**
* Use the function printf
* You are not allowed to use the function puts
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option

6. Prints the size of various types on the computer it is compiled and run on.
**Requirements**
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option.
