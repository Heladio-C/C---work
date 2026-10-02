#include "dog.h"

#include <iostream>

int main() {

    Dog dog(1000,"Fido", male, "Labrador", 3);  

    std::cout << dog.getName() << " says " << dog.speak() << std::endl;    

    return 0;
}