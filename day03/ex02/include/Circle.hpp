#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Shape;

class Circle : public Shape {
    private:
        double radius;

    public:
        Circle(double radius);
        ~Circle();
        double getArea() const;
        double getPerimeter() const;
};

#endif