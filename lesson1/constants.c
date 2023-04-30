#include <stdio.h>

#define RATIO 5.0/9.0
#define OFFSET 32
#define STEP 20

int main() {
    int far = 100;
    
    printf("Farenheit Celcius\n");
    for (; far > 0; far -= STEP) { // start at 100, subtract 20 everytime and stop at 0
        float cel = (far - OFFSET) * RATIO;

        printf("%9d %7.2f\n", far, cel);
    }

    return 0;
}