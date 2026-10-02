#include <iostream>
#include "main.h"


// The parameter accepts a pointer for a int as an argument
// const prevents the function from modifying the value being pointed to
void printInt(const int*);
void printInt(int);

int main(int argc, char const *argv[]){


    // This student is in the stack memory
    //Student s {"Heladio", 3.8};

    // To allocate space in the heap memory we use new
    // This student object is a a pointer to a Student in the heap memory
    Student* s {new Student{"Heladio", 3.8}
    };

    /*
    int i {25};
    int * ptr {&i};
    // or int * ptr {};

    ptr = &i;
    printInt(ptr);
    printInt(&i);
    */

   printStudent(s);
    return 0;
}


// Prints the value of the integer pointed to by ptr.
void printInt(const int* ptr){
    std::cout << "Pointer address: ";
    std::cout << ptr << std::endl;
    std::cout << "Pointer value: ";
    std::cout << *ptr << std::endl;
}

void printStudent(const Student* s){
    std::cout << s->name << ": " << (*s).gpa << std::endl;
}
