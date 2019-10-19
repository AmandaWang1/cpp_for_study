#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		a = 10;
		b = 20;
		c = 30;
		a2 = 100;
	}
	int a;
	int a2;
protected:
	int b;
private:
	int c;
};

class B1 : public A
{
public:
	void test()
	{
		cout<< a <<endl;
		cout<< b <<endl;
		//ֻ��ʹ��a,b ����ʹ��c
	}
};

class B2 : private A
{
public:
	using A::a2;  //������һ��֮��̳�����a2���ݾ��ǹ��е�
	void test()
	{
		cout << a << endl;
		cout << b << endl;
		//cout<<c<<endl;  ����

		cout<<a2<<endl;
	}
};

class B3 : protected A
{
public:
	void test()
	{
		cout << a << endl;
		cout << b << endl;
		//cout<<c<<endl;  ����
	}
};

class B4 : A  //Ĭ����˽�м̳�
{
	int x;  //Ĭ����private
};
class B5 : A  //Ĭ���ǹ��м̳�
{
	int x;  //Ĭ����public
};

class C : public B1
{
	void test()
	{
		cout << a <<endl;
		cout << b <<endl;
	}
};

int main()
{
	B1 b1;
	b1.a;
	//ֻ��ʹ��a,����ʹ��b,c
	b1.test();

	B2 b2;
	//b2.a  b2.b  b2.c��������
	b2.a2;
	b2.test();

	B3 b3;
	//b3.a  b3.b  b3.c��������
	b3.test();

	return 0;
}