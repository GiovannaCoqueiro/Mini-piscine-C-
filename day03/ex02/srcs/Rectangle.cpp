#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height) {
    this->height = height;
    this->width = width;
}

Rectangle::~Rectangle() {

}

double Rectangle::getArea() const {
    return (this->width * this->height);
}

double Rectangle::getPerimeter() const {
    return (2 * (this->width + this->height));
}