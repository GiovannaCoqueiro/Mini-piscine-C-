#include "Worker.hpp"


Worker::Worker(int x, int y, int z, int level, int exp) {
    this->coordonnee.x = x;
    this->coordonnee.y = y;
    this->coordonnee.z = z;
    this->stat.level = level;
    this->stat.exp = exp;
}

Worker::~Worker() {

}

void Worker::work() {
    std::cout << "Worker is working" << std::endl;
}

void Worker::useTool(Tool *tool) {
    tool->use();
}

void Worker::takeTool(Tool* tool) {
    if (tool->assignedWorker != NULL) {
            std::cout << "Remove tool from another worker" << std::endl;
            tool->assignedWorker->releaseTool(tool);
    }
    tool->assignedWorker = this;
    std::cout << "Assign tool" << std::endl;
    toolList.push_back(tool);
}

void Worker::releaseTool(Tool *tool) {
    for(std::vector<Tool *>::iterator it = toolList.begin(); it != toolList.end(); it++) {
        if ((*it) == tool)
        toolList.erase(it);
        std::cout << "Release tool" << std::endl;
        return;
    }
    std::cout << "This tool is not assigned to this worker" << std::endl;
}