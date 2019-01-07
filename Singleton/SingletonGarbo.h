#ifndef SINGLETONGARBO_H
#define SINGLETONGARBO_H

#include <stdio.h>

class SingletonGarbo
{
public:
	static SingletonGarbo* getInstance()
	{
		if(instance == NULL)
			instance = new SingletonGarbo();
		return instance;	
	};
	
private:
	SingletonGarbo() {
		std::cout << "SingletonGarbo constructor" << std::endl;
	};
	~SingletonGarbo() {
		std::cout << "SingletonGarbo destructor" << std::endl;
	};

	static SingletonGarbo* instance;

	//inner class
	struct Garbo
	{
		Garbo() {
			std::cout << "Garbo constructor" << std::endl;
			SingletonGarbo::getInstance();
		};
		// the only purpose of Garbo is to delete instance in its destructor
		~Garbo()
		{
			std::cout << "Garbo destructor" << std::endl;
			if(SingletonGarbo::instance)
			{
				delete SingletonGarbo::instance;
				SingletonGarbo::instance = NULL;
			}
		}
	};

	static Garbo garbo; //system will destruct all static varialbes when progress shut down
};

SingletonGarbo::Garbo SingletonGarbo::garbo; //make sure static Garbo object release when progress shut down

#endif