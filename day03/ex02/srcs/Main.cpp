#include "Shape.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"

int main() {
    Circle circle(5);
    Rectangle rectangle(5, 4);
    Triangle triangle(3, 3, 3);

    std::cout << "Triangle" << std::endl << "Area: " << triangle.getArea() << "  Perimeter: " << triangle.getPerimeter() << std::endl;

    std::cout << std::endl;

    std::cout << "Circle" << std::endl << "Area: " << circle.getArea() << "  Perimeter: " << circle.getPerimeter() << std::endl;

    std::cout << std::endl;

    std::cout << "Rectangle" << std::endl << "Area: " << rectangle.getArea() << "  Perimeter: " << rectangle.getPerimeter() << std::endl;
}