#include <stdio.h>

int main() {

    // All three loops are equivalent
    for(int i = 0; i < 5; i++) {
        if (i == 3) {
            break;
        }
    }

    int i = 0;
    for(; i < 5;) {
        i++;
    }

    while(i < 5) {
        i++;
    }

    int count = 0;
    // nested forloops
    for(int i = 0; i < 5; i++) {
        printf("Inside first loop\n"); // run 5 times
        for (int j = 0; j < 5; j++) {
            printf("\tInside second loop\n"); // run 5 * 5 times
            count++;
        }
    }

    printf("Count is %d\n", count);

    i = 0;
    while(1) {
        printf("Hello\n");
        i++;

        if(i > 10) {
            break; // breaks out of the loop
        }
    }

    i = 0;
    while(i < 10) {
        i++;
        if(i % 2 == 0) {
            continue; // once the code hits continue, it continues to the next loop ignoring anything after the conitnue.
        }
        printf("I is %d\n", i);
    }

    return 0;
}