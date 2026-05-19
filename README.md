# Balanced Parentheses Stack in C

This is a small C project that checks whether the parentheses in a given expression are balanced or not.

The project uses a stack data structure implemented with a linked list. It was created as a learning project to practice basic data structures, dynamic memory allocation, and separating code into header and source files.

## What It Does

The program reads an expression from the user and checks whether the brackets are correctly opened and closed.

It supports these bracket types:
()
[]
{}

Example balanced expressions:
(a + b)
{[a + b] * (c - d)}

Example unbalanced expressions:
(a + b
{[a + b)]


Project Structure:
├── main.c
├── stack.c
└── stack.h
