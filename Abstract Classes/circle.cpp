#include "circle.h"
#include <iostream>
using namespace std;

Circle::Circle(){
    this -> radius = 1.0;
}

Circle::Circle(int x, int y, double radius) : Shape(x, y) {
    this -> radius = radius;
}

double Circle::Area() const{
    return 3.14 * radius * radius;
}

double Circle::Perimeter() const{
    return 2 * 3.14 * radius;
}

void Circle::Print() const{
    cout << "circle: center point (" << GetX() << ", " << GetY() << ") and radius " << radius;
}
