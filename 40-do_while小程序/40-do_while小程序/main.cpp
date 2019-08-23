/********************************************************************************
* @File name: main.cpp
* @Author: 王晨
* @Email:1741312828@qq.com
* @Version: 1.1
* @Date: 2019-8-22
* @Description: 计算两数之和。
********************************************************************************/

#include <iostream>
#include <string>

using namespace std;

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  * @attention  无
  */
int main()
{
	string check;

	do
	{
		cout<<"Please enter two numbers:"<<endl;
		int num1,num2;
		cin>>num1>>num2;
		cout<<"The sum of the two numbers is "<<(num1+num2)<<endl<<endl;

		cout<<"Do you want to continue?   [yes][no]"<<endl;
		cin>>check;

		cout<<endl;

	}while(!check.empty() && check[0] != 'n'); //如果不是没有输入或者第一个字母不是n

	cout<<"End!"<<endl;

	return 0;
}