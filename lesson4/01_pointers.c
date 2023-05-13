#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int b = a;

    printf("a=%d; b=%d\n", a, b);
    
    a = 10;
    printf("a=%d; b=%d\n", a, b); // value of a changed but b didn't change
    
    /*
        Assume we want a functionality where when a changes b should also change.
        In C we can achieve this using pointers.
        **Note: Poiters are a low level programming concept, so high level languages
        such a Java or Python does give users access to pointers.

        What is a pointer? When a value is declared it gets stored somewhere
        in memory. Each slot in memory has a numerical value associated with it.
        The pointer is value "pointing" to that location in memory.
    */
    int* c = malloc(sizeof(int)); // this is how you declare a pointer, using the asterisk (*) after the type.

    printf("The value of c is in this memory address: %p\n", c);
    
    // So how do we put a value inside a pointer?
    *c = 5;
    printf("c=%d (c is still stored in this memory address: %p)\n", *c, c);

    // How can we get the memeory address of a? which is not a pointer
    printf("a=%d (a is stored in memory address: %p)\n", a, &a); // the ampersand (&) means the address of this variable.
    
    // This is how we can link the values of c and a together
    c = &a; // we are making c point to the address of a

    a = 50; // now if we change the value of a, value of c will also change
    printf("a=%d; c=%d\n", a, *c);
    a = 100;
    printf("a=%d; c=%d\n", a, *c);
}