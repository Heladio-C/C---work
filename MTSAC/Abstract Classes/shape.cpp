#include "shape.h"
#include <iostream>
using namespace std;

Shape::Shape(){
    this -> x = 0;
    this -> y = 0;
}
Shape::Shape(int x, int y){
    this -> x = x;
    this -> y = y;
}
int Shape::GetX() const {
    return x;
}
int Shape::GetY() const {
    return y;
}

void Shape::Print() const {
    cout << "(" << x << ", " << y << ")";
}