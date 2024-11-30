#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* merge(int* l1, int* l2, int n1, int n2);
void printArray(int arr[], int n);
int* sort(int* arr, int i, int j);

int main() {
    int arr[] = {-8, 2, 10, 5, -20, 16, 40, 190};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr, n);

    int *sorted = sort(arr, 3, n);
    printArray(sorted, n-3);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int* sort(int* arr, int i, int j) {
    if(j <= i) {
        return NULL;
    } else if (j - i == 1) {
        int *output = malloc(sizeof(int));
        output[0] = arr[i];
        return output;
    }

    int mid = i + (j - i) / 2;

    int* first_half = sort(arr, i, mid);
    int* seconds_half = sort(arr, mid, j);

    return merge(first_half, seconds_half, (mid - i), (j - mid));
}

int* merge(int* l1, int* l2, int n1, int n2) {
    int i, j;
    i = j = 0;

    int* output = malloc(sizeof(int) * (n1 + n2));

    while (i < n1 && j < n2)
    {
        if (l1[i] < l2[j]) {
            output[i + j] = l1[i];
            i++;
        } else {
            output[i+j] = l2[j];
            j++;
        }
    }

    if (i < n1) {
        memcpy((output + i + j), (l1 + i), (n1 - i) * sizeof(int));
    } else if (j < n2) {
        memcpy((output + i + j), (l2 + j), (n2 - j) * sizeof(int));
    }
    
    return output;
}

