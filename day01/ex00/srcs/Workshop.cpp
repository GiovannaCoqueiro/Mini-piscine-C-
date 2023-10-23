#include "Workshop.hpp"

Workshop::Workshop() {
    
}

Workshop::~Workshop() {
    
}

void Workshop::registerWorker(Worker *worker) {
    workerList.push_back(worker);
}

void Workshop::releaseWorker(Worker *worker) {
	for(std::vector<Worker *>::iterator it = workerList.begin(); it != workerList.end(); it++) {
		if ((*it) == worker) {
			workerList.erase(it);
			std::cout << "Release Worker" << std::endl;
			return;
		}
	}
	std::cout << "Not registered" << std::endl;
}

void Workshop::executeWorkDay() {
    for(std::vector<Worker*>::iterator it = workerList.begin(); it != workerList.end(); it++) {
       (*it)->work();
    }
}