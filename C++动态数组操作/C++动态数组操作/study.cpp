#include <iostream>
#include <string>

using namespace std;

int main()
{
	int *p1 = new int[10]; //没有初始化
	string *p2 = new string [10];  //使用默认的构造函数进行初始化

	int *p3 = new int[10](); //用默认值进行初始化
	for(int * q = p3; q != p3+10; q++)
		*q = 11;
	cout<<"第一种方法输出："<<endl;
	for(int * q = p3; q != p3+10; q++)
		cout<<*q<<' ';

	cout<<endl;

	cout<<"第二种方法输出："<<endl;
	for(int i = 0;i<10;i++)
		cout<<*(p3+i)<<' ';

	cout<<endl;

/* 尽量使用第一种方法输出，因为在C++里，指针是数组的迭代器，
    所以尽量使用指针进行输出*/

	return 0;
}