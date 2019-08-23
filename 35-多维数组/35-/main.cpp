#include <iostream>

using namespace std;

int main()
{
	const int hang = 4;
	const int line = 4;
	int a[hang][line] = { {1,2,3,4},{2,4},{6,7},{8,6}};

	int (*p)[4]; //p是一个指针
	//int *p[4]; //p是一个数组
	p = a;
	for(int *q = *p;q!=*p+4;q++)   //输出第一行
		cout<<*q<<' ';

	cout<<endl;

	p = &a[2];
	for(int *q = *p;q!=*p+4;q++)   //输出第三行
		cout<<*q<<' ';

	return 0;
}