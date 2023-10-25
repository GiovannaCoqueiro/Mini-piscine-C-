#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"

class Shape;

class Triangle : public Shape {
    private:
        double side1;
        double side2;
        double side3;

    public:
        Triangle(double side1, double side2, double side3);
        ~Triangle();
        double getArea() const;
        double getPerimeter() const;
        double sqrt(double number) const;
        double abs(double number) const;
};

#endif