#include "AbstractFactory.h"

int main()
{
	FactoryA* factoryA = new FactoryA();
	SingleCoreA* singleCoreA = factoryA->createSingleCore();
	singleCoreA->product();
	MultiCoreA* multiCoreA = factoryA->createMultiCore();
	multiCoreA->product();
	delete singleCoreA;
	delete multiCoreA;
	delete factoryA;

	FactoryB* factoryB = new FactoryB();
	SingleCoreB* singleCoreB = factoryB->createSingleCore();
	singleCoreB->product();
	MultiCoreB* multiCoreB = factoryB->createMultiCore();
	multiCoreB->product();
	delete singleCoreB;
	delete multiCoreB;
	delete factoryB;
}
