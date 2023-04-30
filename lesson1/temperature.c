#include <stdio.h>

int main() {

    int far = 100;
    
    printf("Farenheit Celcius\n");
    for (; far > 0; far -= 20) { // start at 100, subtract 20 everytime and stop at 0
        float cel = (far - 32) * (5/9.0);

        printf("%9d %7.2f\n", far, cel);
    }

    return 0;
}