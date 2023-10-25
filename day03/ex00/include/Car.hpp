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
        Car(Engine engine, Brakes brakes, Wheel wheel, Transmission transmission) {
            this->engine = engine;
            this->brakes = brakes;
            this->wheel = wheel;
            this->transmission = transmission;
        }

        ~Car() {}

        void start() {
            engine.start();
        }

        void accelerate(int speed) {
            engine.accelerate(speed);
        }

        void stop() {
            engine.stop();
        }

        void shift_gears_up() {
            transmission.shift_gears_up();
        }

        void shift_gears_down() {
            transmission.shift_gears_down();
        }

        void reverse() {
            transmission.reverse();
        }

        void turn_wheel(int angle) {
            wheel.turn_wheel(angle);
        }

        void straighten_wheels() {
            wheel.straighten_wheels();
        }

        void apply_force_on_brakes(int force) {
            brakes.apply_force_on_brakes(force);
        }

        void apply_emergency_brakes() {
            brakes.apply_emergency_brakes();
        }
};

#endif