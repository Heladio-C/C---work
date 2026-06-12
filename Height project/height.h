#ifndef HEIGHT_H
#define HEIGHT_H

class Height{

    public: 
    //constructor
    Height(int ft = 0, int in = 0);

    

    //setters
    void setInches(int in);
    void setFeet(int ft);

    //Getters
    int getInches() const;
    int getFeet() const;
    int totalInches() const;

    //operations
    void increment();
    void increment(int inches);
    void print() const;
    bool operator==(const Height& rhs) const;
    Height operator+(const Height& rhs) const;
    Height operator-(const Height& rhs) const;

    //class data members
    private:
    int feet;
    int inches;

};
#endif

