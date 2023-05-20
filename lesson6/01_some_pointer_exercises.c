#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    printf("%p\n", &x);

    char a = 'a';
    printf("%p\n", &a);

    char* pointer = &a;

    printf("%p\n", pointer);
    printf("%c\n", *pointer);


    double pi = 3.1416;
    double *pointer_to_pi = &pi; // Fill in the NULL
    double **pointer_to_pointer = &pointer_to_pi; // Fill in the NULL

    printf("%.4lf\n", **pointer_to_pointer); // Fill in the NULL, use pointer_to_pointer only

    return 0;
}

