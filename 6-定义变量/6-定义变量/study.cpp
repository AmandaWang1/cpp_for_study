#include <iostream>
#include <string>
int main()
{
	int 中国 = 1;
	std::cout<<中国<<std::endl;
	printf("%d\n",中国);

	/* 注意定义字符串的方式 */

	std::string titleA = "你好呀！";//复制初始化
	std::string titleB ("你好呀"); //直接初始化
	std::cout<<titleA<<std::endl;
	std::cout<<titleA<<std::endl;


	std::string number(10,'9');   //注意这个写法
	std::cout << number << std::endl;

	return 0;
}