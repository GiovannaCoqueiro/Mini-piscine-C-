#include "Wheel.hpp"

Wheel::Wheel() {

}

Wheel::~Wheel() {

}

void Wheel::turn_wheel(int angle) {
    std::cout << "Turning wheels by " << angle << " degrees" << std::endl;
}

void Wheel::straighten_wheels() {
    std::cout << "Straightening the wheels" << std::endl;
}