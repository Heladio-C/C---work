#include <iostream>
#include <vector> 
#include <string>


int main(){

    std::vector<std::string> names = {"Heladio", "Kendrick", "Drake", "Jcole"};
    

    //creating a empty vector
    std::vector<int> numberList;



    //specify size, with all being 0 or "" if string
    std::vector<int> list(5);



    // loop through vector
    for (std::string name : names){
        std::cout << name << std::endl;
    }
}
