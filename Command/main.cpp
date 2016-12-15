#include "Invoker.h"
#include "Receiver.h"

void main()
{
	IReceiver* reciever = new IReceiver();
	MouseCommand* mouseCmd = new MouseCommand(reciever);
	KeyCommand* keyCmd = new KeyCommand(reciever);
	Invoker* invoker = new Invoker();
	invoker->addCmd(mouseCmd);
	invoker->addCmd(keyCmd);
	invoker->notify();
	delete mouseCmd;
	delete keyCmd;
	delete invoker;
	delete reciever;
}