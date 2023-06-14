#include <stdio.h>
#include <stdlib.h>
#include "deque.c"

void printDeque(struct CircularNode *head);

int main() {
    struct CircularNode *head1 = NULL;
    struct CircularNode *head2 = NULL;

    push(&head1, 2); // head1 = [2]
    push(&head1, 4); // head1 = [2, 4]
    push(&head1, 6); // head1 = [2, 4, 6]
    push(&head1, 8); // head1 = [2, 4, 6, 8]


    push(&head2, 1); // head2 = [1]
    push(&head2, 3); // head2 = [1, 3]
    push(&head2, 5); // head2 = [1, 3, 5]
    push(&head2, 7); // head2 = [1, 3, 5, 7]

    printf("head1 = ");
    printDeque(head1);
    printf("head2 = ");
    printDeque(head2);

    printf("\n");

    circularUnion(&head1, &head2);
    printf("head1 + head2 = ");
    printDeque(head1);

    return 0;
}

void printDeque(struct CircularNode *head) {
    if (head == NULL) return;
    struct CircularNode *tmp = head;

    do { // do-while loop
        printf("%d, ", tmp->value);
        tmp = tmp->next;
    } while (tmp != head);

    printf("\n");
}