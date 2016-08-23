#include <iostream>
#include <thread>
#include "Singleton.h"
#include "SingletonStatic.h"
#include "SingletonThreadSafe.h"

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

void createThreads1()
{
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
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingletonThreadSafe);
	}

	for(auto& i : threads)
		i.join();
}

int main()
{
	createThreads1();
	createThreads2();
	createThreads3();
}

