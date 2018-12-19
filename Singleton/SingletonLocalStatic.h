#ifndef SINGLETONLOCALSTATIC_H
#define SINGLETONLOCALSTATIC_H

#include <stdio.h>
#include <iostream>

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
	SingletonLocalStatic() {
		std::cout << "SingletonLocalStatic constructor" << std::endl;
	};

	~SingletonLocalStatic() {
		std::cout << "SingletonLocalStatic destructor" << std::endl;
	};

	//SingletonLocalStatic singleton = SingletonLocalStatic::getInstance() uses object copy which is not singleton
	//forbit copy constructor and operator assignment
	SingletonLocalStatic(const SingletonLocalStatic&);
	SingletonLocalStatic& operator=(const SingletonLocalStatic&);
};

#endif