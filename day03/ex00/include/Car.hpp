#ifndef CAR_HPP
#define CAR_HPP

#include "Engine.hpp"
#include "Wheel.hpp"
#include "Brakes.hpp"
#include "Transmission.hpp"

class Engine;
class Wheel;
class Brake;
class Transmission;

class Car {
    private:
        Engine engine;
        Brakes brakes;
        Wheel wheel;
        Transmission transmission;

    public:
        Car(Engine engine, Brakes brakes, Wheel wheel, Transmission transmission);
        ~Car();
        void start();
        void stop();
        void accelerate(int speed);
        void shift_gears_up();
        void shift_gears_down();
        void reverse();
        void turn_wheel(int angle);
        void straighten_wheels();
        void apply_force_on_brakes(int force);
        void apply_emergency_brakes();
};

#endif