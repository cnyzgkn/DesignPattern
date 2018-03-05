#ifndef INVOKER_H
#define INVOKER_H

#include "Command.h"
#include <vector>
#include <iostream>

template<typename It>
class Range
{
    It b, e;
public:
    Range(It b, It e) : b(b), e(e) {}
    It begin() const { return b; }
    It end() const { return e; }
};

template<typename ORange, typename OIt = decltype(std::begin(std::declval<ORange>())), typename It = std::reverse_iterator<OIt>>
Range<It> reverse(ORange && originalRange) {
    return Range<It>(It(std::end(originalRange)), It(std::begin(originalRange)));
}

class Invoker
{
public:
	void addCmd(ICommand* cmd) {cmdArray.push_back(cmd);}
	void notify();
	void undo();

private:
	std::vector<ICommand*> cmdArray;
};

void Invoker::notify()
{
	std::cout << "Invoker::notify()" << std::endl;
	for(auto cmd : cmdArray)
	{
		cmd->ExecuteCmd();
	}
}

void Invoker::undo()
{
	std::cout << "Invoker::undo()" << std::endl;
	for(auto cmd : reverse(cmdArray))
	{
		cmd->undo();
	}
}


#endif