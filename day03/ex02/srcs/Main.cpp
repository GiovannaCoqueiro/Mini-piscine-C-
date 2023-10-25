#include "Shape.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include <vector>

int main() {
    Circle circle(5);
    Rectangle rectangle(5, 4);
    Triangle triangle(3, 3, 3);

    std::vector<Shape *> shapesList;
    shapesList.push_back(&rectangle);
    shapesList.push_back(&circle);
    shapesList.push_back(&triangle);

    for (std::vector<Shape *>::iterator it = shapesList.begin(); it != shapesList.end(); it++) {
        std::cout << "Shape  - Area: " << (*it)->getArea() << ", Perimeter: " << (*it)->getPerimeter() << std::endl;
    }
}