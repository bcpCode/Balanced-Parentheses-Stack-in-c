#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LEN 100



int main() {
    Stack myStack=CreateStack();
    char expr[MAX_STRING_LEN];

    printf("Enter expression: ");
    scanf("%s", expr);


    if (AreParenthesesBalanced(myStack,expr))
        printf("Parentheses are balanced!\n");
    else
        printf("Parentheses are NOT balanced!\n");

    MakeEmptyStack(myStack);
    free(myStack);
    return 0;
}
