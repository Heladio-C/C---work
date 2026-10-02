#ifndef MAIN_H
#define MAIN_H
#include <string>


struct Student{
    std::string name;
    double gpa;
};
void printInt(const int*);


// use const for objects 
void printStudent(const Student*);



#endif // MAIN_H