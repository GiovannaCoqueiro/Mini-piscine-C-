#include "Car.hpp"

Car::Car(Engine engine, Brakes brakes, Wheel wheel, Transmission transmission) {
    this->engine = engine;
    this->brakes = brakes;
    this->wheel = wheel;
    this->transmission = transmission;
}

Car::~Car() {

}

void Car::start() {
    engine.start();
}

void Car::stop() {
    engine.stop();
}

void Car::accelerate(int speed) {
    transmission.accelerate(speed);
}

void Car::shift_gears_up() {
    transmission.shift_gears_up();
}

void Car::shift_gears_down() {
    transmission.shift_gears_down();
}

void Car::reverse() {
    transmission.reverse();
}

void Car::turn_wheel(int angle) {
    wheel.turn_wheel(angle);
}

void Car::straighten_wheels() {
    wheel.straighten_wheels();
}

void Car::apply_force_on_brakes(int force) {
    brakes.apply_force_on_brakes(force);
}

void Car::apply_emergency_brakes() {
    brakes.apply_emergency_brakes();
}