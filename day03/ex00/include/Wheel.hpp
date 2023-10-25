#ifndef WHEEL_HPP
#define WHEEL_HPP

#include <iostream>

class Wheel {
    public:
        Wheel() {}

        ~Wheel() {}

        void turn_wheel(int angle) {
            std::cout << "Turning wheels by " << angle << " degrees" << std::endl;
        }

        void straighten_wheels() {
            std::cout << "Straightening the wheels" << std::endl;
        }
};

#endif