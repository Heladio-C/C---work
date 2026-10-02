#ifndef SHAPE_H
#define SHAPE_H

class Shape{

    public:
    Shape();
    Shape(int x, int y);
    virtual ~Shape(){};

    //Getters
    int GetX() const;
    int GetY() const;

    //pure virtual functions
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
    virtual void Print() const;

    private:
    int x, y;
};

#endif