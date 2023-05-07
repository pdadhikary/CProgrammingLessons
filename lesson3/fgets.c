#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[10];
    char age[5];

    printf("What is your name?\n");
    fgets(name, 10, stdin);

    fflush(stdin);

    printf("What is your age?\n");
    fgets(age, 5, stdin);

    printf("Nice to meet you %s\n", name);
    printf("In 10 years you will be %d\n", atoi(age) + 10);
}