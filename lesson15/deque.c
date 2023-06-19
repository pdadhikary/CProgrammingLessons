#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

void push(struct CircularNode **head, int value) {
    struct CircularNode *new = malloc(sizeof(struct CircularNode));
    new->value = value;

    if (*head == NULL) {
        *head = new;
        new->next = new;
        new->prev = new;
    } else {
        struct CircularNode *prev = (*head)->prev;
        prev->next = new;
        new->prev = prev;
        new->next = *head;
        (*head)->prev = new;
    }
}

int pop(struct CircularNode **head) {
    if (*head == NULL) {
        fprintf(stderr, "Cannot pop from an empty list");
        exit(1);
    }

    struct CircularNode *prev = (*head)->prev;

    if (prev == *head) {
        *head = NULL;
    } else {
        struct CircularNode *prevprev = prev->prev;
        prevprev->next = *head;
        (*head)->prev = prevprev;
    }

    int output = prev->value;
    free(prev);
    return output;
}

void pushLeft(struct CircularNode **head, int value) {
    push(head, value);
    *head = (*head)->prev;
}

int popLeft(struct CircularNode **head) {
    *head = (*head)->next;
    return pop(head);
}