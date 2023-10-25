#ifndef BRAKES_HPP
#define BRAKES_HPP

#include <iostream>

class Brakes {
    public:
        Brakes() {}

        ~Brakes() {}

        void apply_force_on_brakes(int force) {
            std::cout << "Applying brakes with force: " << force << std::endl;
        }

        void apply_emergency_brakes() {
            std::cout << "Applying emergency brakes" << std::endl;
        }
};

#endif