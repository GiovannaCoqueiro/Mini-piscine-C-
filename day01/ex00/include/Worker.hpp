#ifndef WORKER_HPP
#define WORKER_HPP

#include "Tool.hpp"
#include <vector>
#include <iterator>

class Tool;

struct Position {
	int x;
	int y;
	int z;
};

struct Statistic {
	int level;
	int exp;
};

class Worker {
	private:
		Position coordonnee;
		Statistic stat;
		std::vector<Tool *> toolList;

	public:
		Worker(int x, int y, int z, int level, int exp);
		~Worker();
		void work();
		void releaseTool(Tool *tool);
		void takeTool(Tool *tool);
		void useTool(Tool *tool);
};

#endif