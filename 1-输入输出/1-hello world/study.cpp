#include <iostream>
int main()
{
	std::cout<<"hello world"<<std::endl;

	int a;
	a=1;
	std::cout<<a<<std::endl;

	std::cout<<"please enter a number :"<<std::endl;
	int b;
	std::cin>>b;
	std::cout<<b<<std::endl;
	
	int c,d;
	std::cout<<"plesae enter two numbers:"<<std::endl;
	std::cin>>c>>d;
	std::cout<<"The sum is:"<<c+d;

	return 0;
}