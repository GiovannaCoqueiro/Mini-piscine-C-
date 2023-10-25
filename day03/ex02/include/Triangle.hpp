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
        Triangle(double side1, double side2, double side3) {
            this->side1 = side1;
            this->side2 = side2;
            this->side3 = side3;
        }

        ~Triangle() {}

        double getArea() const {
            double sp = (side1 + side2 + side3) / 2;
            return (this->sqrt(sp * (sp - side1) * (sp - side2) * (sp - side3)));
        }

        double getPerimeter() const {
            return (this->side1 + this->side2 + this->side3);
        }

        double sqrt(double number) const {
            double	guess = 0;

            if (number <= 0) {
                return (0);
            } else if (number == 1) {
                return (1);
            }
            while ((guess * guess) <= number && guess <= number / guess) {
                if ((guess * guess) == number) {
                    return (guess);
                }
                guess += 0.000001;
            }
            return guess;
        }

        double abs(double number) const {
            if (number < 0)
                return (number * -1);
            return number;
        }
};

#endif