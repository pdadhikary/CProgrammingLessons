#include <stdio.h>

void printArray(int arr[], int n);
void recursive_printArrayprintArray(int arr[], int n);

int main() {
    int arr[] = {10, 23, 45, 2, 1, 4};
    int size = sizeof(arr)/sizeof(int);

    recursive_printArrayprintArray(arr, 4);

    return 0;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void recursive_printArrayprintArray(int arr[], int n) {
    if (n <= 0) {
        printf("\n");
        return;
    }

    recursive_printArrayprintArray(arr, n-1);
    printf("%d, ", arr[n-1]);
}