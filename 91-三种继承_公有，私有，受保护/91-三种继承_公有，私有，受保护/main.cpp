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
		//只能使用a,b 不能使用c
	}
};

class B2 : private A
{
public:
	using A::a2;  //加上这一句之后继承来的a2数据就是公有的
	void test()
	{
		cout << a << endl;
		cout << b << endl;
		//cout<<c<<endl;  错误

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
		//cout<<c<<endl;  错误
	}
};

class B4 : A  //默认是私有继承
{
	int x;  //默认是private
};
class B5 : A  //默认是公有继承
{
	int x;  //默认是public
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
	//只能使用a,不能使用b,c
	b1.test();

	B2 b2;
	//b2.a  b2.b  b2.c都不能用
	b2.a2;
	b2.test();

	B3 b3;
	//b3.a  b3.b  b3.c都不能用
	b3.test();

	return 0;
}