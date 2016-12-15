#ifndef INVOKER_H
#define INVOKER_H

#include "Command.h"
#include <vector>

class Invoker
{
public:
	void addCmd(ICommand* cmd) {cmdArray.push_back(cmd);}
	void notify();

private:
	std::vector<ICommand*> cmdArray;
};

void Invoker::notify()
{
	for each (auto cmd in cmdArray)
	{
		cmd->ExecuteCmd();
	}
}

#endif