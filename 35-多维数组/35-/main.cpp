#include <iostream>

using namespace std;

int main()
{
	const int hang = 4;
	const int line = 4;
	int a[hang][line] = { {1,2,3,4},{2,4},{6,7},{8,6}};

	int (*p)[4]; //p��һ��ָ��
	//int *p[4]; //p��һ������
	p = a;
	for(int *q = *p;q!=*p+4;q++)   //�����һ��
		cout<<*q<<' ';

	cout<<endl;

	p = &a[2];
	for(int *q = *p;q!=*p+4;q++)   //���������
		cout<<*q<<' ';

	return 0;
}