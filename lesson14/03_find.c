#include <stdio.h>

int find(int arr[], int size, int k);

int main() {
    int arr[] = {10, 23, 45, 2, 1, 4};
    int k = 12;
    int size = sizeof(arr)/sizeof(int);

    if (find(arr, size, k)) {
        printf("%d is in the array!\n", k);
    } else {
        printf("%d is not in the array...\n", k);
    }

    return 0;
}

int find(int arr[], int size, int k) {
    if (size == 0) return 0;

    // check if k is in index size-1, otherwise call you friend to check arr[0 .. size-1)
    return (arr[size - 1] == k) || find(arr, size - 1, k);
}
