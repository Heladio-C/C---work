#include <iostream>
//smart pointers need
#include <memory>

int main(){
//smart pointers 
//std::unique_ptr
//std::shar_ptr
//std::weak_ptr
//now we don't need a delete when the variable goes out of scope
//delete's automatically to prevent memory leaks


std::unique_ptr<int> a{new int};
*a = 4;



}


void foo (std::unique_ptr<int> q){
    *q = 6;
}

void bar(){

}