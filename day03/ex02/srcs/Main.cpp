#include "Shape.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include <vector>

int main() {
    Circle circle(5);
    Rectangle rectangle(5, 4);
    Triangle triangle(3, 3, 3);

    Shape* shapes[] = {&rectangle, &circle, &triangle};

    for (int i = 0; i < 3; i++) {
        std::cout << "Area: " << shapes[i]->getArea() << ", Perimeter: " << shapes[i]->getPerimeter() << std::endl;
    }
}