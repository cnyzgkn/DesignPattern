#ifndef COMMAND_H
#define COMMAND_H

#include <stdlib.h>
#include "Receiver.h"

class ICommand
{
public:
	ICommand(IReceiver* receiver) : m_receiver(receiver) {};
	virtual void ExecuteCmd()= 0;
	virtual ~ICommand() {};

protected:
	IReceiver* m_receiver;
};

class MouseCommand : public ICommand
{
public:
	MouseCommand(IReceiver* receiver) : ICommand(receiver) {};
	virtual void ExecuteCmd() override {m_receiver->MouseAction();}
};

class KeyCommand : public ICommand
{
public:
	KeyCommand(IReceiver* receiver) : ICommand(receiver) {};
	virtual void ExecuteCmd() override {m_receiver->KeyAction();}
};

#endif