#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("No File to read!\n");
    } else {
        printf("Reading files\n");
        FILE* file = fopen(argv[1], "r"); // fopen returns a pointer to the file name. The "r" stands for read mode
        char buffer[SIZE];
        int line_count = 0;
        while(fgets(buffer, SIZE, file) != NULL) { // read until either the file ends
            printf("%s", buffer);
            line_count++;
        }
        printf("\n\nThere were %d lines in the file\n", line_count);
    }
    return 0;
}