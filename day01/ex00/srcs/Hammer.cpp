#include "Hammer.hpp"

Hammer::Hammer() : Tool() {

}

Hammer::~Hammer() {
    
}

void Hammer::use() {
    std::cout << "Using Hammer" << std::endl;
    numberOfUses++;
}

std::string Hammer::getToolType() {
    return "Hammer";
}