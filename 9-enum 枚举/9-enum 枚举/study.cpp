#include <iostream>

enum information
{
	student,//0
	grade,  //1
	number  //2
};

enum sports
{
	basketball = 1,//1
	swim,		   //2
	run = 8,	   //8
	soccer		   //9
};

int main()
{
	information a;
	information b;
	information c;

	a = student; 
	b = grade;
	c = number;

	std::cout<<a<<std::endl<<b<<std::endl<<c<<std::endl;


	std::cout<<std::endl;

	sports d;
	sports e;
	sports f;
	sports g;

	d = basketball;
	e = swim;
	f = run;
	g = soccer;

	std::cout<<d<<std::endl<<e<<std::endl<<f<<std::endl<<g<<std::endl;

	return 0;
}