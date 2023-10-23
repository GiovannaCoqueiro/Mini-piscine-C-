#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include "Tool.hpp"
#include <string>

class Shovel : public Tool {
    public:
        Shovel();
        ~Shovel();
        void use();
        std::string getToolType();
};

#endif