# include <stdio.h> // This is a header, it tells C compiler 
                    //to import standard I/O (Input output) function. 

/*
    This is a multiline comment.
    I can write comments in multiple lines.
*/

// this is a single line comment. The line after this will not be commented.

int main() {
    // This is the main function of the program, it returns 0 once done.

    // The printf() function prints a string to standard out (the console).
    printf("Hello World!\n"); // the '\n' means a new line character (Enter).

    return 0;
}

/*
    To run this code, open the terminal in the same folder as the code.
    type in: gcc hello.c
    This will create a new file called a.out (this is the compiled version of your code)
    now in the terminal type in: a.out
    this will run the code.

    You need to repeat this process everytime you make changes to the code!
*/