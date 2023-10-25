#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Shape;

class Rectangle : public Shape {
    private:
        double width;
        double height;

    public:
        Rectangle(double width, double height) {
            this->height = height;
            this->width = width;
        }

        ~Rectangle() {}

        double getArea() const {
            return (this->width * this->height);
        }

        double getPerimeter() const {
            return (2 * (this->width + this->height));
        }
};

#endif