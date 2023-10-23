#include "Shovel.hpp"

Shovel::Shovel() : Tool() {

}

Shovel::~Shovel() {
    
}

void Shovel::use() {
    std::cout << "Using shovel" << std::endl;
    numberOfUses++;
}

std::string Shovel::getToolType() {
    return "Shovel";
}