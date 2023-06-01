#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    printf("You passed in %d argements:\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("\t%s\n", argv[i]);
    }

    return 0;
}