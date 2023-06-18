#include <stdio.h>
#include <time.h>
#include <limits.h>

int power(int a, int n);
int faster_power(int a, int n);

int counter = 0;

int main() {
    faster_power(4, 100);
    printf("The counter is %d\n", counter);
}

int power(int a, int n) {
    counter++;
    if (n <= 0) return 1;

    return a * power(a, n-1);
}


int faster_power(int a, int n) {
    counter++;
    if (n <= 0) return 1;
    
    int tmp = faster_power(a, n/2);

    if (n % 2 == 0) return tmp * tmp;
    else return a * tmp * tmp;
}