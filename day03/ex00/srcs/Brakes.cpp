#include "Brakes.hpp"

Brakes::Brakes() {

}

Brakes::~Brakes() {

}

void Brakes::apply_force_on_brakes(int force) {
    std::cout << "Applying brakes with force: " << force << std::endl;
}

void Brakes::apply_emergency_brakes() {
    std::cout << "Applying emergency brakes" << std::endl;
}