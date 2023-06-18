#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countLength(char string[]);
int hasAsciiValue(char string[], int asciiLower, int asciiUpper);

int main() {
    // Requirement:
    // length atleast 8
    // must contain upper case characters
    // must contain atleast one number

    char password[] = "Passw0rd";

    char length = countLength(password);
    int hasUpCase = hasAsciiValue(password, 65, 90);
    int hasNumber = hasAsciiValue(password, 48, 59);

    printf("lenght = %d, hasUpperCase = %d, hasNumber = %d\n", length, hasUpCase, hasNumber);

    return 0;
}


int countLength(char string[]) {
    if (strcmp(string, "") == 0) return 0;

    return 1 + countLength(string + 1);
}

int hasAsciiValue(char string[], int asciiLower, int asciiUpper) {
    if (strcmp(string, "") == 0) return 0;

    return (string[0] <= asciiUpper && string[0] >= asciiLower) || hasAsciiValue(string + 1, asciiLower, asciiUpper);
}



