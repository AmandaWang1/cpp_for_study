#include <iostream>
#include <string>

using namespace std;

int main()
{
	int *p1 = new int[10]; //û�г�ʼ��
	string *p2 = new string [10];  //ʹ��Ĭ�ϵĹ��캯�����г�ʼ��

	int *p3 = new int[10](); //��Ĭ��ֵ���г�ʼ��
	for(int * q = p3; q != p3+10; q++)
		*q = 11;
	cout<<"��һ�ַ��������"<<endl;
	for(int * q = p3; q != p3+10; q++)
		cout<<*q<<' ';

	cout<<endl;

	cout<<"�ڶ��ַ��������"<<endl;
	for(int i = 0;i<10;i++)
		cout<<*(p3+i)<<' ';

	cout<<endl;

/* ����ʹ�õ�һ�ַ����������Ϊ��C++�ָ��������ĵ�������
    ���Ծ���ʹ��ָ��������*/

	return 0;
}