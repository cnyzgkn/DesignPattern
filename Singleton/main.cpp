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

void createMulti_Singleton()
{
	std::cout << "createThreads_Singleton" << std::endl;
	for(int i = 0; i < 10; i++)
	{
		createSingleton();
	}
}

void createMulti_SingletonStatic()
{
	std::cout << "createMulti_SingletonStatic" << std::endl;
	for(int i = 0; i < 10; i++)
	{
		createSingletonStatic();
	}
}

void createMulti_SingletonGarbo()
{
	std::cout << "createMulti_SingletonGarbo" << std::endl;
	for(int i = 0; i < 10; i++)
	{
		createSingletonGarbo();
	}
}

void createThreads_Singleton()
{
	std::cout << "createThreads_Singleton" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingleton);
	}

	for(auto& i : threads)
		i.join();
}

void createThreads_SingletonStatic()
{
	std::cout << "createThreads_SingletonStatic" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingletonStatic);
	}

	for(auto& i : threads)
		i.join();
}

void createThreads_SingletonThreadSafe()
{
	std::cout << "createThreads_SingletonThreadSafe" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingletonThreadSafe);
	}

	for(auto& i : threads)
		i.join();
}

void createThreads_SingletonGarbo()
{
	std::cout << "createThreads_SingletonGarbo" << std::endl;
	std::thread threads[10];
	for(int i = 0; i < 10; i++)
	{
		threads[i] = std::thread(createSingletonGarbo);
	}

	for(auto& i : threads)
		i.join();
}

void createThreads_SingletonLocalStatic()
{
	std::cout << "createThreads_SingletonLocalStatic" << std::endl;
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
	//createMulti_Singleton();
	//createThreads_Singleton();

	//createThreads_SingletonThreadSafe();

	createThreads_SingletonStatic();

	//createMulti_SingletonGarbo();
	//createThreads_SingletonGarbo();

	//createThreads_SingletonLocalStatic();
}

