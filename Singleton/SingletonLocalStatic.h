#ifndef SINGLETONLOCALSTATIC_H
#define SINGLETONLOCALSTATIC_H

#include <stdio.h>

//avoid inner class
class SingletonLocalStatic
{
public:
	static SingletonLocalStatic* getInstance()
	{
		static SingletonLocalStatic instance;
		return &instance;
	};
	
private:
	SingletonLocalStatic() {};

	//SingletonLocalStatic singleton = SingletonLocalStatic::getInstance() uses object copy which is not singleton
	//forbit copy constructor and operator assignment
	SingletonLocalStatic(const SingletonLocalStatic&);
	SingletonLocalStatic& operator=(const SingletonLocalStatic&);
};

#endif