/********************************************************************************
* @File name: main.cpp
* @Author: ����
* @Email:1741312828@qq.com
* @Version: 1.1
* @Date: 2019-8-22
* @Description: ��������֮�͡�
********************************************************************************/

#include <iostream>
#include <string>

using namespace std;

/**
  * @brief  ������
  * @param  ��
  * @retval ��
  * @attention  ��
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

	}while(!check.empty() && check[0] != 'n'); //�������û��������ߵ�һ����ĸ����n

	cout<<"End!"<<endl;

	return 0;
}