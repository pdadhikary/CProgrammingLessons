#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(struct Node **head, int value) {
    struct Node* new = malloc(sizeof(struct Node));

    new->value = value;
    new->next = *head;
    *head = new;
}

int pop(struct Node **head) {
    if (*head == NULL) {
        printf("Head null!\n");
        exit(1);
    }

    int value = (*head)->value;
    struct Node* next = (*head)->next;
    *head = next;
    return value;
}

void printStack(struct Node **head) {
    struct Node *tmp = *head;
    while(tmp != NULL) {
        printf("%d, ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}