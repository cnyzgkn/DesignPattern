#ifndef SINGLETONTHREADSAFE_H
#define SINGLETONTHREADSAFE_H

#include <stdio.h>
#include <mutex>

class SingletonThreadSafe
{
public:
	static SingletonThreadSafe* getInstance()
	{
		std::mutex mtx;
		mtx.lock();
		if(instance == NULL)
			instance = new SingletonThreadSafe();
		mtx.unlock();
		return instance;	
	};
	
private:
	SingletonThreadSafe() {};

	static SingletonThreadSafe* instance;
};

SingletonThreadSafe* SingletonThreadSafe::instance = NULL;

#endif