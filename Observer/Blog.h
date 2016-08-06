#include <stdio.h>
#include <vector>
#include <algorithm>
#include "observer.h"

typedef std::vector<AbstractObserver*> objArray;

class Blog
{
public:
	void notify()
	{
		objArray::iterator iter = observerArray.begin();
		while(iter != observerArray.end())
		{
			(*iter)->update();
			iter++;
		}
	}

	void attach(AbstractObserver* obj)
	{
		observerArray.push_back(obj);
	}

	void remove(AbstractObserver* obj)
	{
		objArray::iterator iter = find(observerArray.begin(), observerArray.end(), obj);
		if(iter != observerArray.end())
			observerArray.erase(iter);
	}

private:
	objArray observerArray;
};