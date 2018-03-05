#ifndef COMMAND_H
#define COMMAND_H

#include <stdlib.h>
#include "Receiver.h"

class ICommand
{
public:
	ICommand(IReceiver* receiver) : m_receiver(receiver) {};
	virtual void ExecuteCmd() = 0;
	virtual void undo() = 0;
	virtual ~ICommand() {};

protected:
	IReceiver* m_receiver;
};

class IncrementCommand : public ICommand
{
public:
	IncrementCommand(IReceiver* receiver) : ICommand(receiver) {};
	virtual void ExecuteCmd() override {m_receiver->Increment();}
	virtual void undo() override {m_receiver->Decrement();}
};

class DecrementCommand : public ICommand
{
public:
	DecrementCommand(IReceiver* receiver) : ICommand(receiver) {};
	virtual void ExecuteCmd() override {m_receiver->Decrement();}
	virtual void undo() override {m_receiver->Increment();}
};

class SqrtCommand : public ICommand
{
public:
	SqrtCommand(IReceiver* receiver) : ICommand(receiver) {};
	virtual void ExecuteCmd() override {m_receiver->Sqrt();}
	virtual void undo() override {m_receiver->Square();}
};

class SquareCommand : public ICommand
{
public:
	SquareCommand(IReceiver* receiver) : ICommand(receiver) {};
	virtual void ExecuteCmd() override {m_receiver->Square();}
	virtual void undo() override {m_receiver->Sqrt();}
};

#endif