#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

class Shape {
    public:
        virtual ~Shape() {};
        virtual double getArea()const = 0;
        virtual double getPerimeter()const = 0;
};

#endif