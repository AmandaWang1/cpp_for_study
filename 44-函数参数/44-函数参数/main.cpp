#include <iostream>

using namespace std;

void AddOne(int x)
{
	x = x+1;
}

void AddTwo(int *p)
{
	*p = *p+2;
}

void AddThree(int& x)
{
	x = x+3;
}

int main()
{
	int a,b,c;
	a=1;
	b=2;
	c=3;

	cout<<"��֮ǰ��"<<a<<endl;
	//��û��������a����ȥ��������a�Ŀ���
	AddOne(a);
	cout<<"��֮��"<<a<<endl;
	cout<<endl;

	cout<<"��֮ǰ��"<<b<<endl;
	//��b�ĵ�ַ����һ������ȥ
	AddTwo(&b);
	cout<<"��֮ǰ��"<<b<<endl;
	cout<<endl;

	cout<<"��֮ǰ��"<<c<<endl;
	//������������c�����ǿ���
	AddThree(c);
	cout<<"��֮ǰ��"<<c<<endl;
	cout<<endl;

	return 0;
}