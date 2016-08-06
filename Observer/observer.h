#include <stdio.h>
#include <iostream>

class AbstractObserver
{
public:
	virtual void update() = 0;
};

class observer1 : public AbstractObserver
{
	void update()
	{
		std::cout << "observer1 updated" << std::endl;
	}
};

class observer2 : public AbstractObserver
{
	void update()
	{
		std::cout << "observer2 updated" << std::endl;
	}
};

class observer3 : public AbstractObserver
{
	void update()
	{
		std::cout << "observer3 updated" << std::endl;
	}
};