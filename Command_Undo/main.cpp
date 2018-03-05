#include "Invoker.h"
#include "Receiver.h"

void main()
{
	IReceiver* reciever = new IReceiver(2);
	IncrementCommand* increCmd = new IncrementCommand(reciever);
	DecrementCommand* decreCmd = new DecrementCommand(reciever);
	SquareCommand* squreCmd = new SquareCommand(reciever);
	SqrtCommand* sqrtCmd = new SqrtCommand(reciever);
	Invoker* invoker = new Invoker();
	invoker->addCmd(increCmd);
	invoker->addCmd(decreCmd);
	invoker->addCmd(squreCmd);
	invoker->addCmd(sqrtCmd);
	invoker->notify();
	invoker->undo();
	delete increCmd;
	delete decreCmd;
	delete squreCmd;
	delete sqrtCmd;
	delete invoker;
	delete reciever;
}