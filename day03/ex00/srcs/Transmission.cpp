#include "Transmission.hpp"

Transmission::Transmission() {

}

Transmission::~Transmission() {

}

void Transmission::accelerate(int speed) {
    std::cout << "Accelerating to " << speed << " km/h" << std::endl;
}

void Transmission::shift_gears_up() {
    std::cout << "Shifting gears up" << std::endl;
}

void Transmission::shift_gears_down() {
    std::cout << "Shifting gears down" << std::endl;
}

void Transmission::reverse() {
    std::cout << "Engaging reverse gear" << std::endl;
}