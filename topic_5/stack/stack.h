#include <cstddef>
#ifndef STACK_H
#define STACK_H

struct Stack{
    // 3 8 byte integers 
    int* array;
    size_t nextPos;
    size_t arraySize;
};

Stack* stackFactory(size_t);
void push(Stack*, int);
void pop(Stack*);
int peek(Stack*);
bool empty(Stack*);


#endif // STACK_H