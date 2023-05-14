#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {

    /*
    int arr[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = i * j;
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%03d ", arr[i][j]);
        }
        printf("\n");
    }
    */

    int** arr = malloc(sizeof(int*) * SIZE);

    for(int i = 0; i < SIZE; i++) {
        int* row = malloc(sizeof(int) * SIZE);
        *(arr + i) = row; // arr[i] = row
        for (int j = 0; j < SIZE; j++) {
            *(row + j) = i * j; // row[j] = i * j
        }
    }

    for(int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%02d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}