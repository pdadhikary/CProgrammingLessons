#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 400

char* replace(char* src, char* word, char* token);

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("No File to read!\n");
    }
    else if (argc < 3) {
        printf("No Output file provided\n");
    }
     else {
        printf("Reading files\n");
        FILE* file = fopen(argv[1], "r"); // fopen returns a pointer to the file name. The "r" stands for read mode
        FILE* outputFile = fopen(argv[2], "w"); // clears the file

        char* buffer = malloc(sizeof(char) * SIZE);

        while(fgets(buffer, SIZE, file) != NULL) { // read until either the file ends
            char* token;
            while((token = strstr(buffer, "%s")) != NULL) {
                char* word = malloc(sizeof(char) * 20);
                printf("Type in a word:\n");
                scanf("%s", word);

                buffer = replace(buffer, word, token);
            }

            fputs(buffer, outputFile);
        }
        
        free(file);
        free(outputFile);
        free(buffer);
    }
    return 0;
}

char* replace(char* src, char* word, char* token) {
    int n = strlen(src) + strlen(word);
    char* output = malloc(sizeof(char) * n);
    memset(output, '\0', n);

    int i = (int) (token - src);
    strncpy(output, src, i);
    strcat(output, word);
    strcat(output, token + 2);

    free(src);

    return output;
}