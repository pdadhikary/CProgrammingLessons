#include <stdio.h>
#include <stdlib.h>

void exchange(int, int);
void exchange2(int*, int*);

int main() {
    int a, b;

    a = 1;
    b = 2;

    // exchange(a, b);
    printf("a = %d; b = %d\n", a, b);
    exchange2(&a, &b);
    printf("a = %d; b = %d\n", a, b);
}

void exchange(int x, int y) { // THIS IS INCORRECT
    int tmp = x;
    x = y;
    y = tmp;
}

void exchange2(int* x, int* y) { // THIS IS CORRECT
    int tmp = *x; // * gets the value & gets the address
    *x = *y;
    *y = tmp;
}