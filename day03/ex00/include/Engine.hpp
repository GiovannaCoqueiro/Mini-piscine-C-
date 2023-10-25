#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <iostream>

class Engine {
    public:
        Engine() {}

        ~Engine() {}
        
        void start() {
            std::cout << "Engine started" << std::endl;
        }
        
        void stop() {
            std::cout << "Engine stopped" << std::endl;
        }
};

#endif