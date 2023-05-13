#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    int numbers_array[SIZE]; // creates an arrays of intergers of size 10
    int* numbers_pointer = malloc(sizeof(int) * SIZE); // this does the same but instead uses the pointer notation
    free(numbers_pointer); // free up the declared pointer

    printf("first element of numbners_array is stored at: %p\n", numbers_array);
    printf("second element of numbners_array is stored at: %p\n", numbers_array + 1);
    printf("third element of numbners_array is stored at: %p\n", numbers_array + 2);

    numbers_array[0] = 10;
    *(numbers_array + 0) = 10; // does the same thing as above

    numbers_array[1] = 100;
    *(numbers_array + 1) = 100; // does the same thing as above

    numbers_array[2] = 1000;
    *(numbers_array + 2) = 1000; // does the same thing as above

    for (int i = 0; i < SIZE; i++) {
        numbers_array[i] = i * i;
    }

    for (int i = 0; i < SIZE; i++) { // does the same thing as the above loop
        *(numbers_array + i) = i * i;
    }

    return 0;
}