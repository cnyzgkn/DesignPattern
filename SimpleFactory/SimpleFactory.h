#include <stdio.h>
#include <iostream>

enum coreType {COREA, COREB};

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
	SingleCore* createSingleCore(coreType type)
	{
		if(type == COREA){
			return new SingleCoreA();
		}else if(type == COREB){
			return new SingleCoreB();
		}
		return NULL;
	}
};