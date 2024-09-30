#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

class Triangle {
private:
    double base;   
    double side;   

public:
    Triangle(double b = 1, double s = 1);  

    bool setProperties(double b, double s);

    void scale(double percent);

    double median(bool toBase) const;

    double perimeter() const;

    double area() const;

    double angleAtBase() const;

    double angleAtVertex() const;

    void displayProperties() const;
};

#endif
