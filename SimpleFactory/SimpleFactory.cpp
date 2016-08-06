#include "SimpleFactory.h"

int main()
{
	Factory factory;
	SingleCore* coreA = factory.createSingleCore(COREA);
	coreA->product();
	delete coreA;

	SingleCore* coreB = factory.createSingleCore(COREB);
	coreB->product();
	delete coreB;
}
