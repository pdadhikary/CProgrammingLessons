// Section 1.10

#include <stdio.h>

#define PI 3.14 // we use this for constants that can never change

// function headers
void foo();
void bar(int);

// global variables
int hapiness = 0; // this is a global variable, every function can acess it and change it

int main() {
    printf("(main) happiness is %d\n", hapiness);

    hapiness = 10;
    foo();
    bar(43);

    printf("(main) happiness is %d\n", hapiness);

    return 0;
}

void foo() {
    printf("(foo) happiness is %d\n", hapiness);
}

void bar(int hapiness) { // here the hapiness function argument shadows the hapiness global variable
    printf("(bar) happiness is %d\n", hapiness);
    hapiness = 56;
}