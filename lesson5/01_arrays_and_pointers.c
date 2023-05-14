#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    // int[] arr = new int[];
    int arr[10]; // syntactic sugar
    // int arr2[20];
    // printf("sizof double is %d\n", sizeof(double));

    for (int i = 0; i < 10; i++) {
        // arr[i] = 0;
        *(arr + i) = 0;
    }

    for (int i = 0; i < 10; i++) {
        // arr[i] = 0;
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}