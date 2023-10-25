#include "Circle.hpp"

Circle::Circle(double radius) {
    this->radius = radius;
}

Circle::~Circle() {

}

double Circle::getArea() const {
    return (3.1415 * this->radius * this->radius);
}

double Circle::getPerimeter() const {
    return (2 * 3.1415 * this->radius);
}