
#ifndef STACK_H
#define STACK_H

typedef struct Node {
    char val;
    struct Node* next;
} StackRecord;

typedef StackRecord* Stack;

// Stack function declarations
Stack CreateStack();
void MakeEmptyStack(Stack s);
int IsEmptyStack(Stack s);
void PushStack(char x, Stack s);
char PopStack(Stack s);
char TopOfStack(Stack s);
int IsMatchingPair(char open, char close);
int AreParenthesesBalanced(Stack s,char* expr);

#endif //STACK_H
