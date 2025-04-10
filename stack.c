#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

Stack CreateStack() {
    Stack s=malloc(sizeof(StackRecord));

    if (s==NULL) {
        printf("Memory Allocation Failed!\n");
        exit(1);
    }
    s->next=NULL;
    return s;
}
void MakeEmptyStack(Stack s) {
    Stack temp;
    while (!IsEmptyStack(s)) {
        temp=s->next;
        s->next=temp->next;
        free(temp);
    }
}

int IsEmptyStack(Stack s) {
    return s->next==NULL;
}

void PushStack(char x, Stack s) {
    Stack temp=malloc(sizeof(StackRecord));
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    temp->next=s->next;
    temp->val=x;
    s->next=temp;
}

char PopStack(Stack s) {
    Stack temp;
    if (s->next==NULL) {
        printf("Stack is empty!\n");
        exit(1);

    }
    temp=s->next;
    char ch=temp->val;
    s->next=temp->next;
    free(temp);
    return ch;

}

char TopOfStack(Stack s) {
    if (s->next==NULL) {
        printf("Stack is empty\n");
        exit(1);
    }
    return s->next->val;
}

int IsMatchingPair(char open, char close) {
    if (open=='(' && close ==')') {
        return 1;
    }
    if (open=='{' && close =='}') {
        return 1;
    }
    if (open=='[' && close ==']') {
        return 1;
    }
    return 0;
}

int AreParenthesesBalanced(Stack s,char* expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            PushStack(ch, s);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (IsEmptyStack(s)) {
                return 0;
            }
            char top = PopStack(s);
            if (!IsMatchingPair(top, ch)) {
                return 0;
            }
        }
    }
    return IsEmptyStack(s);
}