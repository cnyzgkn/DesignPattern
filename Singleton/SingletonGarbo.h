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
	SingletonGarbo() {};

	static SingletonGarbo* instance;

	//inner class
	class Garbo
	{
	public:
		// the only purpose of Garbo is to delete instance in its destructor
		~Garbo()
		{
			if(SingletonGarbo::instance)
				delete SingletonGarbo::instance;
		}
	};

	static Garbo garbo; //system will destruct all static varialbes when progress shut down
};

SingletonGarbo* SingletonGarbo::instance = NULL;

#endif