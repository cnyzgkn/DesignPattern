#ifndef SINGLETONSTATIC_H
#define SINGLETONSTATIC_H

#include <iostream>

// thread safe. avoid frequent lock/unlock to get higher performance
class SingletonStatic
{
public:
	static const SingletonStatic* getInstance()
	{
		return instance;
	}

private:
	const static SingletonStatic* instance;
	SingletonStatic() {
		std::cout << "SingletonStatic constructor" << std::endl;
	};
	~SingletonStatic() {
		std::cout << "SingletonStatic destructor" << std::endl;
	};
};

//initilization at process begin, before invoke main
const SingletonStatic* SingletonStatic::instance = new SingletonStatic;

#endif