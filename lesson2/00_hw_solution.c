// Homework solution

#include <stdio.h>

int main() {

    int vowel_count = 0;

    char input = getchar();
    while(input != EOF) {
        if (
            input == 'A' ||
            input == 'E' || 
            input == 'I' ||
            input == 'O' ||
            input == 'U' ||
            input == 'a' ||
            input == 'e' ||
            input == 'i' ||
            input == 'o' ||
            input == 'u'
            ) {
                vowel_count++;
            }
        input = getchar();
    }

    printf("\nNumber of vowels = %d\n", vowel_count);

    return 0;
}