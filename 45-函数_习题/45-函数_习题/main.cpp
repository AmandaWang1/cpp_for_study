/*
	ϰ�⣺
	дһ������1��һ����������ͨ�������ͣ���һ��������const���͵�ָ�룬
	��������������ѡȡ�ϴ�ķ��ء���д������Ŀ���ǿ�ָ�룩
	дһ������2��������������ֵ�� 
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

	cout<<"����֮ǰ��a:"<<a<<"    b:"<<b<<endl;
	swap(&a,&b);
	cout<<"����֮��a:"<<a<<"   b:"<<b<<endl;

	cout<<endl;

	int c = 10;
	int d = 1;
	cout<<"����֮ǰ��c:"<<c<<"    d:"<<d<<endl;
	swap2(c,d);
	cout<<"����֮��c:"<<c<<"     d:"<<d<<endl;



	return 0;
}