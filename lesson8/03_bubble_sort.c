#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void swap(int arr[], int i, int j);
void printArray(int arr[], int n);

// User bubble sort to sort an array of integers
int main() {
    int arr[SIZE] = {4, 1, 3, -5, 7, 10, 23, 11, 9, 5};

    printf("Before sorting...\n");
    printArray(arr, SIZE);

    for(int i = 0; i < SIZE; i++) {
        int smallest, smallestIndex;
        smallest = __INT32_MAX__;

        for(int j = i; j < SIZE; j++) {
            if (arr[j] < smallest) {
                smallestIndex = j;
                smallest = arr[j];
            }
        }

        swap(arr, i, smallestIndex);
    }

    printf("After sorting...\n");
    printArray(arr, SIZE);

    return 0;
}

void swap(int arr[], int i, int j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");
}