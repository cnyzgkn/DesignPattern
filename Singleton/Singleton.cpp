
#include <iostream>
#include "Singleton.h"


Singleton* Singleton::instance = NULL;

int main()
{
	Singleton* instance1 = Singleton::getInstance();
	std::cout << "instance1 = " << instance1 << std::endl;

	Singleton* instance2 = Singleton::getInstance();
	std::cout << "instance2 = " << instance1 << std::endl;
}

