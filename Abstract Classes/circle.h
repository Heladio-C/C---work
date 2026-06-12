#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape{
    public:
        Circle();
        Circle(int x, int y, double radius);
        virtual ~Circle() override{};
        double Area() const override;
        double Perimeter() const override;
        void Print() const override;
    private:
        double radius;

};
#endif