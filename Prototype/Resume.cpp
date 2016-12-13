#include "Resume.h"
#include <iostream>

//ResumeA
ResumeA::ResumeA(const char* str)
{
	if(str != NULL)
	{
		this->name = new char[strlen(str)+1];
		strcpy(this->name, str);
	}else
	{
		this->name = new char[1];
		this->name[0] = '\0';
	}
}

ResumeA::ResumeA(const ResumeA& ref)
{
	//if(this == &ref) return; //not check self-init because of clone()

	if(ref.name != NULL)
	{
		this->name = new char[strlen(ref.name)+1];
		strcpy(this->name, ref.name);
	}else
	{
		this->name = new char[1];
		this->name[0] = '\0';
	}
}

ResumeA::~ResumeA()
{
	delete [] this->name;
}

ResumeA* ResumeA::clone()
{
	return new ResumeA(*this);
}

void ResumeA::Show()
{
	std::cout << "ResumeA name " << this->name << std::endl;
}


//ResumeB
ResumeB::ResumeB(const char* str)
{
	if(str != NULL)
	{
		this->name = new char[strlen(str)+1];
		strcpy(this->name, str);
	}else
	{
		this->name = new char[1];
		this->name[0] = '\0';
	}
}

ResumeB::ResumeB(const ResumeB& ref)
{
	//if(this == &ref) return; //not check self-init because of clone()

	if(ref.name != NULL)
	{
		this->name = new char[strlen(ref.name)+1];
		strcpy(this->name, ref.name);
	}else
	{
		this->name = new char[1];
		this->name[0] = '\0';
	}
}

ResumeB::~ResumeB()
{
	delete [] this->name;
}

ResumeB* ResumeB::clone()
{
	return new ResumeB(*this);
}

void ResumeB::Show()
{
	std::cout << "ResumeB name " << this->name << std::endl;
}




