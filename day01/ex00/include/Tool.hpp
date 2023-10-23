#ifndef TOOL_HPP
#define TOOL_HPP

#include <Worker.hpp>
#include <iostream>

class Worker;

class Tool {
    public:
        Tool();
        virtual ~Tool();
        int numberOfUses;
        Worker *assignedWorker;
        virtual void use() = 0;
        virtual std::string getToolType() = 0;
};

#endif