#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    Circle c1;
    Circle c2(5,7, 2.5);
    Rectangle r1;
    Rectangle r2(5, 7, 10, 15);
    Triangle t1 (0, 0, 4, 3);

    //array of base class pointers
    Shape *pShapeArray[5] = {&c1, &r1, &c2, &r2, &t1}; 

    cout << fixed << setprecision(2);
    for(int i = 0; i < 5; i ++){
        pShapeArray[i] -> Print();
        cout << endl;
        cout << "area:      " << pShapeArray[i] -> Area() << endl;
        cout << "perimeter: " << pShapeArray[i] -> Perimeter() << endl << endl;
    }

    cout << "Size of class: " << sizeof(c1) << endl;
    return 0;
}