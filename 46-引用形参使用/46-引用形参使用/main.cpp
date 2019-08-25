#include <iostream>

using namespace std;

void count ( int a,int b, int &加法结果,int &减法结果,int &乘法结果,int &除法结果)
{
	加法结果 = a+b;
	减法结果 = a-b;
	乘法结果 = a*b;
	除法结果 = a/b;
}

int main()
{
	int a,b;
	cout<<"请输入两个数："<<endl;
	cin>>a>>b;
	int 加法结果,减法结果,乘法结果,除法结果;
	count(a,b,加法结果,减法结果,乘法结果,除法结果);
	cout<<"加法结果:"<<加法结果<<endl;
	cout<<"减法结果:"<<减法结果<<endl;
	cout<<"乘法结果:"<<乘法结果<<endl;
	cout<<"除法结果:"<<除法结果<<endl;

	return 0;
}