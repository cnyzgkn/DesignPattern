#include <stdlib.h>
#include <iostream>

using namespace std;

class Manager
{
public:
	Manager(Manager* manager) : mManager(manager) {};
	virtual ~Manager() {delete mManager;};
	virtual void DealWithRequest(int num)
	{
		if(num < 10000)
			cout << "Manager approve " << num << endl;
		else
			mManager->DealWithRequest(num);
	};

protected:
	Manager* mManager;
};

class SeniorManager : public Manager
{
public:
	SeniorManager(Manager* manager) : Manager(manager) {};
	void DealWithRequest(int num)
	{
		if(num >= 10000 && num < 20000)
			cout << "Senior manager approve " << num << endl;
		else
			mManager->DealWithRequest(num);
	};
};

class Director : public SeniorManager
{
public:
	Director(Manager* manager) : SeniorManager(manager) {};
	void DealWithRequest(int num)
	{
		if(num >= 20000)
			cout << "Director approve " << num << endl;
		else
			mManager->DealWithRequest(num);
	};
};

int main()
{
	Manager* director = new Director(NULL);
	Manager* srManager = new SeniorManager(director);
	Manager* manager = new Manager(srManager);
	manager->DealWithRequest(8000);
	manager->DealWithRequest(12000);
	manager->DealWithRequest(25000);
}