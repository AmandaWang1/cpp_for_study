/*
	习题：
	写一个函数1，一个参数是普通变量类型，另一个参数是const类型的指针，
	从这两个参数中选取较大的返回。（写这个题的目的是看指针）
	写一个函数2，交换两个参数值。 
 */

#include <iostream>

using namespace std;

int getBigger(int x,const int *y)
{
	return x>*y?x:*y;
}

void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void swap2(int &i,int&j)
{
	int temp;
	temp = i;
	i = j;
	j = temp;
}

int main()
{
	int a = 3;
	int b = 12;
	cout<<getBigger(a,&b)<<endl;

	cout<<"交换之前：a:"<<a<<"    b:"<<b<<endl;
	swap(&a,&b);
	cout<<"交换之后：a:"<<a<<"   b:"<<b<<endl;

	cout<<endl;

	int c = 10;
	int d = 1;
	cout<<"交换之前：c:"<<c<<"    d:"<<d<<endl;
	swap2(c,d);
	cout<<"交换之后：c:"<<c<<"     d:"<<d<<endl;



	return 0;
}