#include <stdio.h>

class Singleton
{
public:
	static Singleton* getInstance()
	{
		if(instance == NULL)
			instance = new Singleton();
		return instance;	
	}
	
private:
	Singleton()
	{
	}

	static Singleton* instance;
};