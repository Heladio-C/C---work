#include <iostream>
#include <vector>


int main() {



    int a [10];
    int b [10];

    std::cout << a << std::endl;
    std::cout << (a + 1) << std::endl;

    *(a + 1) = 3;

    std::cout << (a - 1) << std::endl;
    std::cout << (a - b) << std::endl;



    //vectors 
    std::vector<int> list;

    for(int i = 1; i <= 10; i++){
        list.push_back(i);
    }

    //only way to print out list 

    for(int element: list){
        std::cout << element << ", ";
    }
}