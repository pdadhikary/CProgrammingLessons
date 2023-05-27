#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

#define SIZE 10


void printArray(int arr[], int n);


// create a program that take an array as input and then reverses it
int main() {
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    printf("Before reversing...\n");
    printArray(arr, SIZE);

    struct Node* head = NULL;

    for(int i = 0; i < SIZE; i++) {
        push(&head, arr[i]);
    }

    for(int i = 0; i < SIZE; i++) {
        arr[i] = pop(&head);
    }

    printf("After reversing...\n");
    printArray(arr, SIZE);

    return 0;
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");
}