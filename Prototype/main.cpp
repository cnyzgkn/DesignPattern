#include "Resume.h"

void main()
{
	ResumeA* protoA = new ResumeA("Randy");
	ResumeA* copy1 = protoA->clone();
	copy1->Show();
	delete copy1;
	ResumeA* copy2 = protoA->clone();
	copy2->Show();
	delete copy2;
	ResumeA* copy3 = protoA->clone();
	copy3->Show();
	delete copy3;
	delete protoA;

	ResumeB* protoB = new ResumeB("Bob");
	ResumeB* copy4 = protoB->clone();
	copy4->Show();
	delete copy4;
	ResumeB* copy5 = protoB->clone();
	copy5->Show();
	delete copy5;
	ResumeB* copy6 = protoB->clone();
	copy6->Show();
	delete copy6;
	delete protoB;
}