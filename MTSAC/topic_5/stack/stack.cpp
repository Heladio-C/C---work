#include "stack.h"
#define SCALING_FACTOR 2

static void resize(Stack* s);

Stack* stackFactory(size_t initialSize){

    return new Stack{new int[initialSize], 0, initialSize};
}

void push(Stack* stack, int val){

    if(stack -> nextPos == stack -> arraySize){
        resize(stack);
    }
    stack -> array[stack -> nextPos++] = val;

}

void pop(Stack* stack){
     if (!empty(stack)) {
        --stack->nextPos;
    }
}

int peek(Stack* stack){
    if (!empty(stack)) {
        return stack->array[stack->nextPos - 1];
    }
}

bool empty(Stack* stack){
    return stack -> nextPos == 0;
}

static void resize(Stack* s){
    int* ptr;
    s-> arraySize *= SCALING_FACTOR;
    ptr = {new int[s-> arraySize]};
    // copy old array to new array
    for(size_t i = 0; i < s -> nextPos; ++i)
    {
        ptr[i] = s -> array[i];
    }

    // now deallocate old array
    delete[] s -> array;
    s -> array = ptr;
}