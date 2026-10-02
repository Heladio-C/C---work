#include <iostream>
#include "stack.h"
#define TEST_SIZE 8

int main(int argc, char const *argv[]){


    Stack* s{stackFactory(2)};

    for(int i = 0; i <= TEST_SIZE; ++i)
    {
        push(s,i);
        std::cout << i << " ";
    }

    std::cout << std::endl;

    while(!empty(s)) {
        std::cout << peek(s) << " ";
        pop(s);
    }

    std::cout << std::endl;

    return 0;
}