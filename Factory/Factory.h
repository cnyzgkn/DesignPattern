#include <stdio.h>
#include <iostream>

class SingleCore
{
public:
	virtual void product() = 0;
	virtual ~SingleCore() {};
};

class SingleCoreA: public SingleCore
{
public:
	void product()
	{
		std::cout << "Core A" << std::endl;
	}
};

class SingleCoreB: public SingleCore
{
public:
	void product()
	{
		std::cout << "Core B" << std::endl;
	}
};

class Factory
{
public:
	virtual SingleCore* createSingleCore() = 0;
	virtual ~Factory() {};
};

class FactoryA : public Factory
{
public:
	SingleCoreA* createSingleCore()
	{
		return new SingleCoreA();
	}
};

class FactoryB : public Factory
{
public:
	SingleCoreB* createSingleCore()
	{
		return new SingleCoreB();
	}
};