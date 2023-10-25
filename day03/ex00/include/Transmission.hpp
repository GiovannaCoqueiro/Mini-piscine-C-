#ifndef TRANSMISSION_HPP
#define TRANSMISSION_HPP

#include <iostream>

class Transmission {
    public:
        Transmission() {}

        ~Transmission() {}

        void shift_gears_up() {
            std::cout << "Shifting gears up" << std::endl;
        }

        void shift_gears_down() {
            std::cout << "Shifting gears down" << std::endl;
        }

        void reverse() {
            std::cout << "Engaging reverse gear" << std::endl;
        }
};

#endif