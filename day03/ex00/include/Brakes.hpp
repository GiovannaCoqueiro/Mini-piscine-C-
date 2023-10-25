#ifndef BRAKES_HPP
#define BRAKES_HPP

#include <iostream>

class Brakes {
    public:
        Brakes();
        ~Brakes();
        void apply_force_on_brakes(int force);
        void apply_emergency_brakes();
};

#endif