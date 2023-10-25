#include "Car.hpp"

int main() {
    Engine engine;
    Brakes brakes;
    Transmission transmission;
    Wheel wheel;
    Car car(engine, brakes, wheel, transmission);

    car.start();
    car.accelerate(100);
    car.shift_gears_up();
    car.turn_wheel(10);
    car.accelerate(100);
    car.apply_force_on_brakes(100);
    car.stop();

    return 0;
}