# Balanced Parentheses Stack in C

This is a small C project that checks whether the brackets in a given expression are balanced.

The project uses a stack data structure implemented with a linked list. It was created as a learning project to practice basic data structures, dynamic memory allocation, and separating code into header and source files.

## What It Does

The program reads an expression from the user and checks whether the brackets are correctly opened and closed.

Supported bracket types:

```txt
()
[]
{}
```

Balanced examples:

```txt
(a + b)
{[a + b] * (c - d)}
```

Unbalanced examples:

```txt
(a + b
{[a + b)]
```

## Project Structure

```txt
.
├── main.c
├── stack.c
└── stack.h
```

## Files

### main.c

Contains the main program logic. It reads input from the user and calls the function that checks whether the expression is balanced.

### stack.c

Contains the stack implementation. It includes functions for push, pop, checking the top element, and checking whether the stack is empty.

### stack.h

Contains the stack structure and function declarations.

## How to Compile

You can compile the project with GCC:

```bash
gcc main.c stack.c -o parentheses_checker
```

## How to Run

On Linux or macOS:

```bash
./parentheses_checker
```

On Windows:

```bash
parentheses_checker.exe
```

## Example Usage

```txt
Enter an expression: {[a+b]*(c-d)}
Balanced
```

```txt
Enter an expression: {[a+b)*(c-d)}
Not Balanced
```

## Concepts Practiced

This project was made to practice:

- Stack data structure
- Linked list implementation
- Dynamic memory allocation
- Header and source file separation
- Basic algorithm design in C

## Notes

This is a simple learning project. The main goal is to understand how a stack can be used to solve the balanced parentheses problem.
