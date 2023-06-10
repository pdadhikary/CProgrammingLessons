#include <stdio.h>
#include <stdlib.h>
#include "deque.c"


int main() {
    struct CircularNode *head = NULL;

    push(&head, 5); // [5]
    push(&head, 2); // [5, 2]
    push(&head, 10); // [5, 2, 10]
    pushLeft(&head, 20); // [20, 5, 2, 10]
    pushLeft(&head, 19); // [19, 20, 5, 2, 10]

    printf("pop = %d\n", pop(&head)); // 10
    printf("popLeft = %d\n", popLeft(&head)); // 19
    printf("popLeft = %d\n", popLeft(&head)); // 20
    printf("popLeft = %d\n", popLeft(&head)); // 5

    return 0;
}