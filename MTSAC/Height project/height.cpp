#include "height.h"
#include <iostream>

Height::Height(int ft, int in){
    feet = ft;
    inches = in;
}


void Height::setFeet(int ft){  
    feet = ft; 
}

void Height::setInches(int in){
    inches = in;
}


int Height::getFeet() const{
    return feet;
}

int Height::getInches() const{
    return inches;
}

int Height::totalInches() const{
    return (feet * 12) + inches;
}

//operations
void Height::increment() {
    inches++;
    if(inches >= 12){
        inches = 0;
        feet++;
    }
}

void Height::increment(int in){
    if(in >= 1 && in <=11){
        inches += in;

        if(inches >=12){
            inches -= 12;
            feet++;
        }
    }
}


void Height::print() const{
    std::cout << feet << "' " << inches << "\"";
}


//operator overloading
bool Height::operator==(const Height& rhs) const{
    return (feet == rhs.feet && inches == rhs.inches);
}

//Addition Operator
Height Height::operator+(const Height& rhs) const{
    int total = this -> totalInches() + rhs.totalInches();

    return Height(total / 12, total % 12);
}

//subtraction operator 
Height Height::operator-(const Height& rhs) const{
    int total1 = this -> totalInches();
    int total2 = rhs.totalInches();

    int difference;

    if(total1 > total2){
        difference = total1 - total2;
    } else {
        difference = total2 - total1;
    }

    return Height(difference / 12, difference % 12);
}