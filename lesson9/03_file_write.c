#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main() {
    char* fileName = "output.txt";
    // FILE* output = fopen(fileName, "w"); // this clears the file first then writes
    FILE* output = fopen(fileName, "a"); // this writes at the end of the file.

    char* string = "This is a another line\n";
    
    fputs(string, output);
    free(output);
    return 0;
}