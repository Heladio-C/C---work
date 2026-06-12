#include "triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle() : Shape(0,0) {
    this -> base = 1.0;
    this -> height = 1.0;
}


Triangle::Triangle(int x, int y, double base, double height) : Shape(x, y) {
    this -> base = base;
    this -> height = height;
}

double Triangle::Area() const{
    return 0.5 * base * height;
}

double Triangle::Perimeter() const {
    double hypotenuse = sqrt((base * base) + (height * height));
    return base + height + hypotenuse;
}

void Triangle::Print() const{
    int x = GetX();
    int y = GetY();

    int b = static_cast<int>(base);
    int h = static_cast<int>(height);

    cout << "Triangle:" << endl;
    cout << "top-left point (" << x << ", " << y << ")" << endl;
    cout << "top-right point (" << x + b << ", " << y << ")" << endl;
    cout << "bottom-left point (" << x << ", " << y + h << ")" << endl;
    cout << "base: " << base << ", height: " << height;
}

