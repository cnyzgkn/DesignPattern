#include "Factory.h"

int main()
{
	FactoryA* factoryA = new FactoryA();
	SingleCoreA* coreA = factoryA->createSingleCore();
	coreA->product();
	delete coreA;
	delete factoryA;

	FactoryB* factoryB = new FactoryB();
	SingleCoreB* coreB = factoryB->createSingleCore();
	coreB->product();
	delete coreB;
	delete factoryB;
}
