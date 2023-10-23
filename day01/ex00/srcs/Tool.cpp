#include "Tool.hpp"

Tool::Tool() {
    numberOfUses = 0;
    assignedWorker = NULL;
}

Tool::~Tool() {

}

void Tool::use() {
    std::cout << "Using Tool" << std::endl;
}