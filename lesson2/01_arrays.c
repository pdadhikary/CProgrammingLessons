// Section 1.6
#include <stdio.h>

int main() {
    int arr[10]; // creating an array with 10 elements
    // you can create and array of any type!

    for(int i = 0; i < 10; i++) {
        printf("%d, ", arr[i]); // print out all the elements inside the array separated by a comma
    }
    printf("\n");

    arr[0] = 100; // set the first element in the array to 100
    arr[1] = 200; // set the second element in the array to 200

    for(int i = 0; i < 10; i++) {
        arr[i] = 0; // initalizing all the elements to 0
    }

    // lets count the frequency of digits 0-9 in a user's input
    char input = getchar();
    
    while (input != EOF) {
        if (input >= '0' && input <='9') {
            // if the input is a digit, then increment that digit's count in array
            arr[input - '0'] += 1;
        }
        input = getchar();
    }

    for (int i = 0; i < 10; i++) {
        // print the count of each element
        printf("%d's count: %d\n", i, arr[i]);
    }

    return 0;
}