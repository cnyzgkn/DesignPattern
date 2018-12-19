#ifndef SINGLETON_H
#define SINGLETON_H

#include <stdio.h>
#include <iostream>

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
	Singleton() {
		std::cout << "Singleton constructor" << std::endl;
	};
	~Singleton() {
		std::cout << "Singleton destructor" << std::endl;
	};

	static Singleton* instance;
};

Singleton* Singleton::instance = NULL;

//weakless: when will instance be released? when will destructor of Singleton be called?

#endif