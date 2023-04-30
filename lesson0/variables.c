# include <stdio.h>

int main() {
    printf("Hello World!\n");

    // INTEGERS and LONGS and SHORTS
    int x = 1000; // declaring an integer
    short s = 10; // declaring a short
    long l = 10000000; // declaring a long
    
    // Both integers, longs and shorts use the token %d
    printf("x is equal to %d\n", x);
    printf("l is equal to %d\n", l);
    printf("s is equal to %d\n", s);

    /* 
        The difference between an int and a short is their size.
        You can check the size of different variable using the
        sizeof() operator. This function returns the size of the
        variable in bytes.
    */
    printf("Intergers have a size of %d\n", sizeof(int));
    printf("Longs have a size of %d\n", sizeof(long));
    printf("Shorts have a size of %d\n", sizeof(short));
    /*
        NOTE: The output of this code will be different for different computers.
        In general sizeof(short) <= sizeof(int) <= sizeof(long)
    */
    printf("\n");

    // =============================================================

    // FLOATS and DOUBLES
    float pi = 3.1416; // declaring a floating point number
    double e = 2.71828; // declaring a double

    // Both floats and doubles use the token %f
    printf("pi is equal to %f\n", pi);
    printf("e is equal to %f\n", e);

    // to print out fewer decimal places you can do something like
    // %.3f this will round the number to 3 decimal places, for example.
    printf("pi rounded to 3 decimal places is %.3f\n", pi);

    printf("Floats have a size of %d\n", sizeof(float));
    printf("Doubles have a size of %d\n", sizeof(double));
    printf("\n");

    // =============================================================

    // CHARACTERS
    char c = 'A'; // delclaring a character, always use '' to declare a charater.
    // To print characters use the token %c
    printf("c is equal to '%c'\n", c);

    // =============================================================

    // BOOLEANS
    /*
        In C there are no boolean variables true, false like in Java.
        By convension programmers use 0 to represent false and 1 to represent true.
    */

    return 0;
}