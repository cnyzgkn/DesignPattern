#ifndef SINGLETON_H
#define SINGLETON_H

#include <stdio.h>

class Singleton
{
public:
	static Singleton* getInstance()
	{
		if(instance == NULL)
			instance = new Singleton();
		return instance;	
	};
	
private:
	Singleton() {};

	static Singleton* instance;
};

Singleton* Singleton::instance = NULL;

#endif