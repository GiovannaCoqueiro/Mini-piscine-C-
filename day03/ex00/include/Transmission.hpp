#ifndef TRANSMISSION_HPP
#define TRANSMISSION_HPP

#include <iostream>

class Transmission {
    public:
        Transmission();
        ~Transmission();
        void accelerate(int speed);
        void shift_gears_up();
        void shift_gears_down();
        void reverse();
};

#endif