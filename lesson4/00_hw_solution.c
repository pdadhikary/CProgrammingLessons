#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OFFSET 32
#define ALPHABET_LENGTH 26

char lower(char);

int main() {
    char shift[10];
    char message[101];
    int shift_val;

    printf("Enter a value to shift by (-25 to 25)?\n");
    fgets(shift, 10, stdin);
    fflush(stdin);

    shift_val = atoi(shift) % ALPHABET_LENGTH;

    printf("Now enter the secret message to encode: (max 100 characters)\n");
    fgets(message, 100, stdin);
    fflush(stdin);

    int character = 0;
    for(int i = 0; (character = message[i]) != '\0'; i++) {
        if (character >= 'a' && character <= 'z') {
            character = lower(character);
            character += shift_val;

            if (character > 'z') character -= ALPHABET_LENGTH;
            if (character < 'a') character += ALPHABET_LENGTH;
        }
        printf("%c", character);
    }
}

char lower(char element) {
    // convert the character to lower case
    if (element >= 'A' && element <= 'Z') element += OFFSET;

    return element;
}