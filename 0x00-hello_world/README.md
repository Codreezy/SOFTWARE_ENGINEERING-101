
Question No.1. WRITE A SCRIPT THAT RUNS A C FILE THROUGH THE PREPROCESSOR AND SAVE THE RESULT TO ANOTHER FILE.

Code in the C language has to be preprocessed and converted into a form that can be executable.
Transforming assembly language to Machine Language.

"gcc -E $CFILE -o c" this code/script that runs a C file through the preprocessor and saves the output into another file.

gcc is the compiler called "GNU compiler collection" for C, C++ and Go for example.

E - runs our file through the preprocessor...Note that the file can be compiled and not ran.

$CFILE is the file name

-o is the output and it should be in c "new file" in this case.

Make sure to make your file executable by the chmod.

The man page of chmod covers that.

u stands for user.
g stands for group.
o stands for others.
a stands for all.

That means that chmod u+x will grant only the owner of that file execution permissions.

...#/bin/bash... is known as a SHEBANG- in Unix. Shebang is a collection of characters or letters that consist of a number sign and exclamation mark, that is (#!)

users are required to explicitly specify the type of shell they want to use to run their scripts. Now to explicitly specify the type of shell used by the script, Shebang is used. So we can useshebang, that is, #!/bin/bash at the start or top of the script to instruct our system to use bash as a default shell.


Question No.2. WRITE A SCRIPT THAT COMPILES THE C FILE BUT DOES NOT LINK.

"gcc -c $CFILE" this script complies the file but does not link.


Question No.3. WRITE A SCRIPT THAT GENERATES THE ASSEMBLY CODE OF A C CODE AND SAVE IT IN AN OUTPUT FILE.

"gcc -S $CFILE"

The code will be saved in an object file for example if the program was main.c the object file will be main.o

Question No.3. WRITE A C SCRIPT THAT COMPILES A C FILE AND CREATES AN EXECUTABLE cisfun

"gcc $CFILE -o cisfun"

Here the object file is specified using the output -o. The object file is cisfun.o not CFILE.o


Question No.4. WRITE A PROGRAM THAT PRINTS EXACTLY PROGRAMMING IS LIKE BUILDING A MULTILINGUAL PUZZLE FOLLOWED BY A NEW LINE.
Use puts instead of printf and the program should end with the value 0.

           #include <stdio.h>
	   /**
	    *main - Entry.
	    *Return: Always 0
	    */
	   int main(void)
	   {
	      puts("/"Programming is like building a multilingual puzzle");
	      return (0);
	   }

<stdio.h> header file allows us to perform input and output operations in C. The functions like printf() and scanf() are used to display output and take input from a user, respectively.
This library allows us to communicate with users easily.
It tells the compiler to insert the contents of stdio at that particular place. In C/C++ we use some functions like printf(), scanf(), cout,cin. These functions are not defined by the
programmer.

int main(void) represents that the function takes NO argument. Suppose, if we don't keep void in the bracket, the function will take any number of arguments. The syntax of int main(void) is as follows − int main(void){ --- --- return 0; }

The puts() function in C/C++ is used to write a line or string to the output( stdout ) stream. It prints the passed string with a newline and returns an integer value. The return value depends on the success of the writing procedure.
Is Puts same as printf in C?
printf is a C function to print a formatted string to the standard output stream, which is the computer screen. In contrast, “puts” is a C library function that writes a string to stdout or
standard output. Thus, this is the fundamental difference between printf and puts.
Which is better puts or printf?
puts() can be preferred for printing a string because it is generally less expensive (implementation of puts() is generally simpler than printf()), and if the string has formatting characters like '%s', then printf() would give unexpected results.


Question No.5. WRITE A PROGRAM THAT PRINTS EXACTLY WITH PROPER GRAMMAR, BUT THE OUTCOME IS A PIECE OF ART, FOLLOWED BY A NEW LINE.
Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option

           #include <stdio.h>
	   /**
	    * main - Entry
	    * Return: Always 0
	    */
	    int main(void)
	    {
	       printf("with proper grammar, but the outcome is a piece of art, \n");
	       return (0);
	    }


Question No.6. WRITE A C PROGRAM THAT PRINTS VARIOUS TYPES (DATA) eg INT, FLOAT, CHAR ON THE COMPUTER IT IS COMPILED AND RUN ON.
You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
           #include <stdio.h>
	   /**
	   * main - Entry
	   * Return - Always 0
	   */
	   int main(void)
	   {
	      printf("size of char: %i bytes(s)\n", sizeof(char));
	      printf("size of int: %i bytes(s)\n", sizeof(int));
	      printf("size of a long int: %i bytes(s)\n", sizeof(long int));
	      printf("size of a float: %i bytes(s)\n", sizeof(float));
	      printf("size of a long long int: %i bytes(s)\n", sizeof(long long int));
	      return (0);
	    }
Sizeof is a much used operator in the C or C++. It is a COMPLILE TIME UNARY OPERATOR which can be used to compute the size of its operand. The result of sizeof is of unsigned integral type 
which is usually denoted by size_t.
Represents the amount of memory in bytes occupied by the operand. We can use the %lu access specifier to print this data type(unsigned integer) using the printf statement


Question No.7. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
The answer will be: "gcc -s -masm=intel $CFILE"
gcc this complies the code as we discussed earlier.
-s saves the code (new concept first time looking into this)
-masm=intel this is the intel syntax assembly code
$CFILE the output file (N/B the .s extension for e.g main.c - main.s)

Question No.8. Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option
             #include <stdio.h>
	     #include <unistd.h>
	     /**
	     * main - Entry
	     * Return - 1
	     int main(void)
	     {
	       write(1, "and that piece of art is useful\" - Dora Korpar 2015-10-19\n", 59);
	       return (1);
	     }
<unistd.h> : In the C and C++ programming languages, unistd. h is the name of the header file that provides access to the POSIX operating system API. It is defined by the POSIX. 1 standard,
the base of the Single Unix Specification, and should therefore be available in any POSIX-compliant operating system and compiler.

What POSIX means?
Portable Operating System Interface
POSIX (Portable Operating System Interface) is a set of standard operating system interfaces based on the Unix operating system. Helps maintain compatibility between operating systems.

write() sytem call: The write is one of the most basic routines provided by a Unix-like operating system kernel. It writes data from a buffer declared by the user to a given device, such as a file. This is the primary way to output data from a program by directly using a system call.
A temporary storage area is called buffer. C uses a buffer to output or input variables. The buffer stores the variable that is supposed to be taken in (input) or sent out (output) of the 
program. A buffer needs to be cleared before the next input is taken in.

What API means?
An application programming interface (API) is a way for two or more computer programs to communicate with each other using requests and responses.


