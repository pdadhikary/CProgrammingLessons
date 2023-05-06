// Section 1.7
#include <stdio.h>
#include <stdlib.h>

// you must define the header of a function before implementing it
// header is sometimes refered to as a signature
void print_even(); // header for print_even() function
void print_odd(); // header for print_odd() function

int main() {
    print_odd();
    return 0;
}

void print_even() { // declaring a function that prints the first 5 even numbers
    for (int i = 2; i <= 10; i+=2) {
        printf("%d\n", i);
    }
    printf("\n");
}

void print_odd() {
    for (int i = 1; i <= 10; i += 2) { // declaring a function the prints the first 5 odd numbers
        printf("%d\n", i);
    }
}