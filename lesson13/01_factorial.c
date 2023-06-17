#include <stdio.h>

int factorial(int n);

int main() {
    printf("-9! is %d\n", factorial(-9));
    return 0;
}

int factorial(int n) {
    // Base Case - Easy problem
    if (n <= 1) {
        return 1;
    }

    // Recursive Case - Hard problem
    return n * factorial(n-1);
}