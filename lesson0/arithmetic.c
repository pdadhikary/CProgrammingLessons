# include <stdio.h>

int main() {
    int a = 32;
    int b = 54;
    float c = 1.51;

    /*
        During any arithmetic operation if one of the operands 
        is a float the result is always going to be a float.

        This is called Upcasting. This is similar to how it works in Java.
    */

    // ADDITION and SUBTRACTION
    printf("a + b = %d\n", a + b); // Integer + Integer = Integer
    printf("a - b = %d\n", a - b); // Integer - Integer = Integer
    printf("a + c = %.4f\n", a + c); // Integer + Float = Float
    printf("a - c = %.4f\n", a - c); // Integer - Float = Float
    printf("\n");

    
    // MULTIPLICATION AND DIVISION
    printf("a * b = %d\n", a * b); // Integer * Integer = Integer
    printf("a / b = %d\n", a / b); // Integer / Integer = Integer (Note this will only return the quotient)
    printf("a * c = %.4f\n", a * c); // Integer * Float = Float
    printf("a / c = %.4f\n", a / c); // Integer / Float = Float
    printf("\n");


    // CASTING
    /*
        To get the floating point result of the two integer division,
        you can cast one of the operants to a float.
    */
    printf("a / (float) b = %.4f\n", a / (float) b);
    printf("\n");


    /*
        Decimal System has 10 symbols 0...9 to represent values
        Binary System has 2 symbols 0 and 1 to represent values

        123 in decimal can be interpreted as 1*10^2 + 2*10^1 + 3*10^0 = 100 + 20 + 3 = 123
        101 in binary ca nbe interpreted as 1*2^2 + 0*2^1 + 1*2^0 = 4 + 0 + 1 = 5

        binary  decimal
        0       0
        1       1
        10      2
        11      3
        100     4
        101     5
        110     6
        111     7
        1000    8
        1001    8
        1010    10
    */

    // BITWISE OPERATIONS
    int five = 0b101; // declaing an integer using binary notations. This is the same as int five = 5.

    printf("five << 1 is %d\n", five << 1); // 0b101 shifted to the left by 1bit is 0b1010 which is binary for 10.
    printf("five >> 1 is %d\n", five >> 1); // 0b101 shifted to the right by 1bit is 0b010 which is binary for 2.

    /*
        Note that,
        shifting left by 1bit is the same as multiplying by 2^1.
        shifting right by 1bit is the same is dividing by 2^1. (integer the division, result is the quotient)
    */

    // BITWISE OR
    printf("0 | 0 is %d\n", 0|0);
    printf("0 | 1 is %d\n", 0|1);
    printf("1 | 1 is %d\n", 1|1);
    // BITWISE AND
    printf("0 & 0 is %d\n", 0 & 0);
    printf("0 & 1 is %d\n", 0 & 1);
    printf("1 & 1 is %d\n", 1 & 1);

    return 0;
}