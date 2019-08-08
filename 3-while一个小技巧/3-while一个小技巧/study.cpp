#include <iostream>

int main()
{
	int a;
	int sum=0;		 
	while(std::cin>>a)//当有输入时就继续循环，没有输入时就停止循环
		sum+=a;		  //ctrl+z 表示结束

	std::cout<<"这些数字的和为"<<sum<<std::endl;

	return 0;
}