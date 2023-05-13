#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50
#define BUFFER 20

int main() {
    int participant_count = 0;
    char **string_array = malloc(sizeof(char*) * SIZE); // create an array of strings of size 50
    char *input = malloc(sizeof(char) * BUFFER); // create a string that can hold 20 characters
    fgets(input, BUFFER, stdin);
    fflush(stdin);
    while (strcmp(input, "quit\n")) {
        *(string_array + participant_count) = input;
        participant_count++;
        char *input = malloc(sizeof(char) * BUFFER);
        fgets(input, BUFFER, stdin);
        fflush(stdin);
    }

    printf("%d participants signed up for the event.\n");

    for (int j = 0; j < participant_count; j++) {
        printf("[%02d]. %20s\n", j, *(string_array + j));
    }

    return 0;
}