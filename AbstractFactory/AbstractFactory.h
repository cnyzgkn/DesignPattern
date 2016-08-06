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
		std::cout << "Single Core A" << std::endl;
	}
};

class SingleCoreB: public SingleCore
{
public:
	void product()
	{
		std::cout << "Single Core B" << std::endl;
	}
};

class MultiCore
{
public:
	virtual void product() = 0;
	virtual ~MultiCore() {};
};

class MultiCoreA: public MultiCore
{
public:
	void product()
	{
		std::cout << "Multi Core A" << std::endl;
	}
};

class MultiCoreB: public MultiCore
{
public:
	void product()
	{
		std::cout << "Multi Core B" << std::endl;
	}
};


class Factory
{
public:
	virtual SingleCore* createSingleCore() = 0;
	virtual MultiCore* createMultiCore() = 0;
	virtual ~Factory() {};
};

class FactoryA : public Factory
{
public:
	SingleCoreA* createSingleCore()
	{
		return new SingleCoreA();
	}
	MultiCoreA* createMultiCore()
	{
		return new MultiCoreA();
	}
};

class FactoryB : public Factory
{
public:
	SingleCoreB* createSingleCore()
	{
		return new SingleCoreB();
	}
	MultiCoreB* createMultiCore()
	{
		return new MultiCoreB();
	}
};