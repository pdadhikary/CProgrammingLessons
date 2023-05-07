// Homework solution

#include <stdio.h>

int main() {
    int character_count, digit_count, word_count;
    character_count = digit_count = word_count = 0;
    
    int inside_word = 0;

    char input = getchar();
    while(input != EOF) {
        
        // check if the input is a white space
        if (
            input != ' ' &&
            input != '\n' &&
            input != '\t'
        ) {
            // increment character count
            character_count++;
            // check if it is a digit
            if (input >= '0' && input <= '9') {
                digit_count++;
            } else {
                inside_word = 1; // set the inside_word flag to true
            }
            
        } else if (inside_word) {
            // else if we are inside a word...
            word_count++; // increment the word count
            inside_word = 0; // reset the inside_word flag to false
        }

        input = getchar();
    }

    printf("\nNumber of characters = %d\n", character_count);
    printf("\nNumber of digits = %d\n", digit_count);
    printf("\nNumber of words = %d\n", word_count);
    
    return 0;
}