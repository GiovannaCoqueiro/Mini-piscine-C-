#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Shape;

class Rectangle : public Shape {
    private:
        double width;
        double height;

    public:
        Rectangle(double width, double height);
        ~Rectangle();
        double getArea() const;
        double getPerimeter() const;
};

#endif