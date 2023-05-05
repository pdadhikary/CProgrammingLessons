// Section 1.8

#include <stdio.h>

void range(int, int, int);

int main() {
    printf("first 5 even numbers:\n");
    range(2, 10, 2);
    
    printf("\nfirst 5 odd numbers:\n");
    range(1, 10, 2);

    printf("\nmultiles of 5 between 5 and 50");
    range(5, 50, 5);

    /*
        By using arguments we made our simple program
        more re-useable for a variety of tasks.
    */

    return 0;
}

void range(int start, int stop, int step) {
    for (int i = start; i <= stop; i+= step) {
        printf("%d\n", i);
    }
}