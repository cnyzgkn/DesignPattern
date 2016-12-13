#include <iostream>
#include <thread>
#include "Singleton.h"
#include "SingletonStatic.h"
#include "SingletonThreadSafe.h"
#include "SingletonGarbo.h"
#include "SingletonLocalStatic.h"

void createSingleton()
{
	Singleton* instance = Singleton::getInstance();
	std::cout << "instance = " << instance << std::endl;
}

void createSingletonStatic()
{
	const SingletonStatic* instance = SingletonStatic::getInstance();
	std::cout << "instance = " << instance << std::endl;
}

void createSingletonThreadSafe()
{
	SingletonThreadSafe* instance = SingletonThreadSafe::getInstance();
	std::cout << "instance = " << instance << std::endl;
}

void createSingletonGarbo()
{
	SingletonGarbo* instance = SingletonGarbo::getInstance();
	std::cout << "instance = " << instance << std::endl;
}

void createSingletonLocalStatic()
{
	SingletonLocalStatic* instance = SingletonLocalStatic::getInstance();
	std::cout << "instance = " << instance << std::endl;
}

void createThreads1()
{
	std::cout << "createThreads1" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingleton);
	}

	for(auto& i : threads)
		i.join();
}

void createThreads2()
{
	std::cout << "createThreads2" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingletonStatic);
	}

	for(auto& i : threads)
		i.join();
}

void createThreads3()
{
	std::cout << "createThreads3" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingletonThreadSafe);
	}

	for(auto& i : threads)
		i.join();
}

void createThreads4()
{
	std::cout << "createThreads4" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingletonGarbo);
	}

	for(auto& i : threads)
		i.join();
}

void createThreads5()
{
	std::cout << "createThreads5" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingletonLocalStatic);
	}

	for(auto& i : threads)
		i.join();
}

int main()
{
	createThreads1();
	createThreads2();
	createThreads3();
	createThreads4();
	createThreads5();
}

