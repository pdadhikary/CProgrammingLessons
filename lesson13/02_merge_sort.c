#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* sort(int *arr, int i, int j);
int* merge(int *l1, int *l2, int n1, int n2);

int main() {
    int arr[] = {3, 2, 1};
    int n = 3;

    int *output = sort(arr, 0, n);

    for (int i = 0; i < n; i++) {
        printf("%d, ", output[i]);
    }
    printf("\n");
}

int* sort(int *arr, int i, int j) {
    if (j <= i) {
        return NULL;
    } else if (j - i == 1) {
        int *output = malloc(sizeof(int) * 1);
        output[0] = arr[i];
        return output;
    }

    int mid = (j - i) / 2;
    printf("%d\n", mid);
    
    int *l1 = sort(arr, i, mid);
    int *l2 = sort(arr, mid, j);

    return merge(l1, l2, (mid - i), (j - mid));
}

int* merge(int *l1, int *l2, int n1, int n2) {
    int* output = malloc(sizeof(int) * (n1 + n2));

    int i, j;
    i = j = 0;

    while (i < n1 && j < n2) {
        if (l1[i] < l2[j]) {
            output[i+j] = l1[i];
            i++;
        } else {
            output[i+j] = l2[j];
            j++;
        }
    }

    if (i < n1) {
        memcpy((output + i + j), (l1 + i), (n1 - i) * sizeof(int));
    }
    
    if (j < n2) {
        memcpy((output + i + j), (l2 + j), (n2 - j) * sizeof(int));
    }

    return output;
}