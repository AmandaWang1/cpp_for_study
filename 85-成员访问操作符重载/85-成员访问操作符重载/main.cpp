#include <iostream>
#include "string.h"
#include "pointer.h"

using namespace std;

int main()
{
	String s("hello world");
	s.display();

	String *ps = &s;
	ps->display();

	try
	{
		Pointer p1("C++");
		p1->display();

		String s = *p1;
		s.display();

		Pointer p2;  //没有初始化，会抛出异常
		p2->display();
	}
	catch(String const &error)
	{
		error.display();
	}

	return 0;
}