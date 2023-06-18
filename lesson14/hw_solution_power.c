#include <stdio.h>

double power(double a, int n); // this function calculates a^n

int main() {
    printf("5^2 is %d\n", power(5, 2));

    printf("-4^3 is %d\n", power(-4, 3));

    printf("2^5 is %d\n", power(2, 5));

    printf("3^3 is %d\n", power(3, 3));
}

double power(double a, int n) {
    if (n == 0) return 1;

    if (n < 0) {
        return power(1/a, -n);
    } else {
        return a * power(a, n-1);
    }
}