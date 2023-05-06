#include <stdio.h>
#include <string.h>

void number_to_word(int, char[]);

int main() {
    char buffer[10];

    int number = 1342;
    
    for (; number != 0; number /= 10) {
        number_to_word(number % 10, buffer);
        printf("%s ", buffer);
    }
    printf("\n");

    return 0;
}

void number_to_word(int number, char buffer[]) {
    switch (number)
    {
    case 0:
        strcpy(buffer, "Zero");
        break;
    case 1:
        strcpy(buffer, "One");
        break;
    case 2:
        strcpy(buffer, "Two");
        break;
    case 3:
        strcpy(buffer, "Three");
        break;
    case 4:
        strcpy(buffer, "Four");
        break;
    case 5:
        strcpy(buffer, "Five");
        break;
    case 6:
        strcpy(buffer, "Six");
        break;
    case 7:
        strcpy(buffer, "Seven");
        break;
    case 8:
        strcpy(buffer, "Eight");
        break;
    case 9:
        strcpy(buffer, "Nine");
        break;
    default:
        strcpy(buffer, "");
        break;
    }
}
