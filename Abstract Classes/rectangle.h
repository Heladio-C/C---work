#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape{

    public:
    Rectangle();
    Rectangle(int x, int y, double width, double height);
    virtual ~Rectangle(){};
    double Area() const override;
    double Perimeter() const override;
    void Print() const override;

    private:
    double width, height;

};
#endif