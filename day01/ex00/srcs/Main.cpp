#include "Workshop.hpp"
#include "Hammer.hpp"
#include "Shovel.hpp"

int main() {
    Worker worker1(1, 1, 1, 1, 1);
    Worker worker2(2, 2, 2, 2, 2);
    Worker worker3(3, 3, 3, 3, 3);
    Worker worker4(4, 4, 4, 4, 4);
    Worker worker5(5, 5, 5, 5, 4);

    Shovel shovel1;
    Shovel shovel2;
    Shovel shovel3;
 
    Shovel hammer1;
    Shovel hammer2;
    Shovel hammer3;

    Workshop workshop1;
    Workshop workshop2;
    Workshop workshop3;

    std::cout << "assign tools to workers" << std::endl;

    worker1.takeTool(&shovel1);
    worker2.takeTool(&shovel2);
    worker3.takeTool(&shovel3);
    worker4.takeTool(&hammer1);
    worker5.takeTool(&hammer2);
    worker5.takeTool(&hammer3);

    std::cout << std::endl << "assign tool from a worker to another one" << std::endl;

    worker2.takeTool(&shovel1);

    std::cout << std::endl << "assign workers to workshops" << std::endl;

    workshop1.registerWorker(&worker1);
    workshop2.registerWorker(&worker1);
    workshop3.registerWorker(&worker1);
    
    workshop1.registerWorker(&worker2);
    workshop2.registerWorker(&worker2);
    workshop3.registerWorker(&worker2);
    
    workshop1.registerWorker(&worker3);
    workshop2.registerWorker(&worker3);
    workshop3.registerWorker(&worker3);

    std::cout << std::endl << "execute work day" << std::endl;

    workshop1.executeWorkDay();

    std::cout << std::endl << "remove worker from workshop" << std::endl;

    workshop1.releaseWorker(&worker1);
    workshop1.executeWorkDay();
}