#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

int main() {
    struct Node* head = NULL;

    // push 10 into the list
    push(&head, 10); // [10]

    // push 9 through 0 onto the lists
    for(int i=9; i >= 0; i--) {
        push(&head, i);
    } // [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    // in a loop perform 3 pop
    for(int i=0; i < 3; i++) {
        pop(&head); 
    } // [3, 4, 5, 6, 7, 8, 9, 10]

    // predict the nect pop
    int x = pop(&head);
    printf("x = %d\n", x); // we should get the value of 3.
    printStack(&head);
    return 0;
}
