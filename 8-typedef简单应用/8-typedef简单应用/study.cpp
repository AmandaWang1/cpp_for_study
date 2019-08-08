#include <iostream>

typedef int 人数;
typedef double 分数;

int main()
{
	/*  这样定义变量比较清晰 */
	人数 a;
	分数 b;

	std::cin>>a>>b;

	std::cout<<a<<std::endl;
	std::cout<<b<<std::endl;


	return 0;
}