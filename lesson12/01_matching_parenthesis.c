#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deque.c"

int checkParenthesis(char[]); 

int main() {
    char input[] = "(2+4)*{(5*3)}";

    if (checkParenthesis(input)) {
        printf("%s is a valid parenthesis!\n", input);
    } else {
        printf("%s is not valid!\n", input);
    }

    return 0;
}

int checkParenthesis(char P[]) {
    struct CircularNode *stack = NULL;
    int n = strlen(P);
    
    for(int i = 0; i < n; i++) {
        if (P[i] == '(' || P[i] == '{' || P[i] == '[') {
            push(&stack, (int) P[i]);
        } else if (P[i] == ')') {
            if (stack == NULL || ((char) pop(&stack)) != '(') return 0;
        } else if (P[i] == '}') {
            if (stack == NULL || ((char) pop(&stack)) != '{') return 0;
        } else if (P[i] == ']') {
            if (stack == NULL || ((char) pop(&stack)) != '[') return 0;
        }
    }

    return stack == NULL;
}