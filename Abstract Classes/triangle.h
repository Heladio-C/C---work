#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape{

    public:
    Triangle();
    Triangle(int x, int y, double base, double height);
    virtual ~Triangle() override {};
    double Area() const override;
    double Perimeter() const override;
    void Print() const override;

    private:
    double base, height;
};

#endif