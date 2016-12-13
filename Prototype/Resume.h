#ifndef RESUME_H
#define RESUME_H

#include "stdlib.h"

class Resume 
{
protected:
	char* name;

public:
	Resume() {};
	//pure virtual destructor should be defined or it will not be called in inheritance
	virtual ~Resume() = 0 {}; 
	//key of prototype pattern is deep copy to itself
	virtual Resume* clone() {return NULL;};
	virtual void Show() {};
};

//Resume::~Resume(){}

class ResumeA : public Resume 
{
public:
	ResumeA(const char* str);
	ResumeA(const ResumeA& ref);
	~ResumeA();
	ResumeA* clone() override;
	void Show() override;
};

class ResumeB : public Resume 
{
public:
	ResumeB(const char* str);
	ResumeB(const ResumeB& ref);
	~ResumeB();
	ResumeB* clone() override;
	void Show() override;
};

#endif