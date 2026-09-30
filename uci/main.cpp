#include "test.h"
#include <iostream>

#include <random>


const unsigned int SEED = 123;
std::default_random_engine engine(SEED);


int main(){

// &q "This means address of q "
// int* means it will hold an adress

int number1 = 4;

int* number2 = &number1;


std::cout << "This will give the value of number 1: " <<  *number2 << std::endl;
std::cout << "This will give the address of the address it's pointing to " << number2 << std::endl;



//creating space in the heap for a new point
int* b = new int;
*b = 42; // assign a value to the allocated space

//here we will connect c to the address of b so making changes to C's value will change the value of B
//you have to use *b or else it won't compile 
int& c = *b;


// to make a copy of the value in b without connecting each other do this: so this is no longer a reference 
//to the value pointed by b
int d = *b;


std::cout << "The current value of b is : " << *b << std::endl;

c = 5;

std::cout << "The new value of B is now: " << *b << std::endl;


//deleting the allocated memory to avoid memory leaks
delete b;
b = nullptr;



//here we will make a reference to the pointer of b, d becomes an alias for the pointer b
//any changes make to d will affect b and vice versa

int*& d = b;



}