#include <stdio.h>
#include "Blog.h"

int main()
{
	Blog blog;
	observer1* obj1 = new observer1();
	observer2* obj2 = new observer2();
	observer3* obj3 = new observer3();

	std::cout << "before attach objects" << std::endl;
	blog.notify();

	blog.attach(obj1);
	blog.attach(obj2);
	blog.attach(obj3);

	std::cout << "after attach objects" << std::endl;

	blog.notify();

	blog.remove(obj1);
	blog.remove(obj2);
	blog.remove(obj3);

	std::cout << "after remove objects" << std::endl;

	delete obj1;
	delete obj2;
	delete obj3;
}