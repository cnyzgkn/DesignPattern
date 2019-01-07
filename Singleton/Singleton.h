#ifndef SINGLETON_H
#define SINGLETON_H

#include <stdio.h>
#include <iostream>

//lazy
class Singleton
{
public:
	static Singleton* getInstance()
	{
		if(instance == NULL)
			instance = new Singleton();
		return instance;	
	};

	virtual bool destroy()
	{
		if(instance != NULL)
		{
			delete instance;
			instance = NULL;
		}
	};
	
private:
	Singleton() {
		std::cout << "Singleton constructor" << std::endl;
	};
	~Singleton() {
		std::cout << "Singleton destructor" << std::endl;
	};

	static Singleton* instance;
};

Singleton* Singleton::instance = NULL;

//weakless: 
//1. instance not released -> solution: add destroy() method
//2. not thread safe
#endif