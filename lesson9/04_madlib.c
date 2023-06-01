#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 400

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("No File to read!\n");
    } else {
        printf("Reading files\n");
        FILE* file = fopen(argv[1], "r"); // fopen returns a pointer to the file name. The "r" stands for read mode
        char* buffer = malloc(sizeof(char) * SIZE);
        int token_count = 0;
        while(fgets(buffer, SIZE, file) != NULL) { // read until either the file ends
            char* token = buffer;
            for(token = strstr(token, "%s"); token != NULL; token += 2) {
                token_count++;
            }
        }
        printf("\n\nThere were %d tokens in the file\n", token_count);
    }
    return 0;
}