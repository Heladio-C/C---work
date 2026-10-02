#include <iostream>

int main(){

    const short spaceAvailable = 5;
    const int arraySize = 10;
    std::string newNames;


    int number[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8 , 9 , 10};
    int newArray[arraySize];

    
        //reverse array
        for(int i = 0; i < arraySize; i++){
            newArray[i] = number[arraySize - 1 - i];
        }
    
    for(int i = 0; i < arraySize; i++){
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    if(static_cast<int>('5') == 5){


        std::cout << "This is true" << std::endl;
        } else {
            std::cout << "This is false" << std::endl;
    }
    std::cout << static_cast<int>('6') << std::endl;







    // this is a n example of a static array, which has a fixed size that is determined at compile time, and cannot be changed during runtime.
    //int priceOfCars[spaceAvailable] = {10000, 20000, 30000, 40000};

    // this is a static array of strings, which can hold 6 elements, but only 5 are initialized, the last element will be empty and will have a value of 0.
    //std::string names[6] = {"John", "Jane", "Jack", "Jill", "Joe", "Jenny"};
    // or     

   // std::cout << priceOfCars[0] << std::endl; 
    //std::cout << priceOfCars[4] << std::endl;
   // std::cout << "As you can see there is a value of 0 for the empty array element" << std::endl;


    // dynamic arrays 
    // use pointers and dynamic memory allocation to create an array that can grow or shrink in size during runtime.

    // to declare a dynamic array you have to use the new keyword and specify the type and size of the array, for example:
    //int* dynamicArray = new int[spaceAvailable];  // this creates a dynamic array of integers with a size of 5, and returns a pointer to the first element of the array.


    //VECTORS

    // is a class, also a template that allows to make vector objects like string, int, double

    // #include <vector>  

    // std::vector<int> myVector;           // this is a dyanmic array that can grow or shrink during runtime, it can hold integers
    // std::vector<string> names;  // this is a dynamic array that can grow or shrink during runtime, it can hold strings. 

    // Vector1 = Vector2  // this would copy the contents of Vector2 into Vector1, so if Vector2 has 5 elements, 
    //Vector1 will also have 5 elements with the same values.

    // does vectors use more memory than arrays?
// use alot
// do 

// arrays actually hold addresses of the elements, they are called references, so when you access an element of an array,
// you are actually accessing the memory address of that element.


}