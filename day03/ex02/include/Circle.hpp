#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Shape;

class Circle : public Shape {
    private:
        double radius;

    public:
        Circle(double radius) {
            this->radius = radius;
        }

        ~Circle() {}

        double getArea() const {
            return (3.1415 * this->radius * this->radius);
        }

        double getPerimeter() const {
            return (2 * 3.1415 * this->radius);
        }
};

#endif