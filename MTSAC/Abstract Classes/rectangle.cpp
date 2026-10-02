#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
    this -> width = 1.0; 
    this -> height = 1.0;
}

Rectangle::Rectangle(int x, int y, double width, double height) : Shape(x, y) {
    this -> width = width;
    this -> height = height;
}

double Rectangle::Area() const{
    return width * height;
}

double Rectangle::Perimeter() const{
 return (2 * width) + (2 * height);
}

void Rectangle::Print() const{
    int x = GetX();
    int y = GetY();

    int w = static_cast<int>(width);
    int h = static_cast<int>(height);

    cout << "Rectangle:" << endl;
    cout << "top-left point (" << x << ", " << y << ")" << endl;
    cout << "top-right point (" << x + w << ", " << y << ")" << endl;
    cout << "bottom-right point (" << x + w << ", " << y + h << ")" << endl;
    cout << "bottom-left point (" << x << ", " << y + h << ")" << endl;
    cout << "width: " << width << ", height: " << height;
}