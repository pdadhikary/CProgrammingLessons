#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char string[], int i, int j);

int main() {
    char input[] = "racecar";
    int n = strlen(input) - 1;

    if (isPalindrome(input, 0, n)) {
        printf("%s is a palindrome!\n", input);
    } else {
        printf("%s is not a palindrome!\n", input);
    }

    return 0;
}

int isPalindrome(char string[], int i, int j) {
    if (i >= j) return 1;

    return (string[i] == string[j]) && isPalindrome(string, i + 1, j - 1);
}