#include <stdio.h>

#define OFFEST 32
#define LOWER_A 97
#define LOWER_Z 122
int main() {

    printf("What is your Name?\n");

    char input = getchar(); // reads a character from the console
    
    while (input != '\n') // read characters from the unconsole until the user hits Enter key
    {
        if (input >= LOWER_A && input <= LOWER_Z) {
            putchar(input - OFFEST); // prints a character to the console
        } else {
            putchar(input);
        }

        input = getchar();
    }

    return 0;
}