#include <iostream>

using namespace std;

class Base
{
public:
	Base()   //缺省(没有参数)的构造函数
	{
		b1 = b2 = 0;
	}
	Base(int i , int j);
	~Base();
	void print()
	{
		cout<<b1<<","<<b2<<",";
	}
private:
	int b1,b2;
};

Base::Base(int i,int j) : b1(i),b2(j)
{
	cout<<"Base的构造函数被调用:"<<b1<<","<<b2<<endl;
}

Base::~Base()
{
	cout<<"Base的析构函数被调用："<<b1<<","<<b2<<",";
}

class Derived : public Base
{
public:
	Derived() : d(0)
	{}
	Derived(int i,int j,int k);
	~Derived();
	void print();
private:
	int d;
};

Derived::Derived(int i,int j,int k):Base(i,j),d(k)
{
	cout<<"Derived的构造函数被调用："<<d<<endl;
}

Derived::~Derived()
{
	cout<<"Derived的析构函数被调用："<<d<<endl;
}

void Derived::print()
{
	Base::print();
	cout<<d<<endl;
}

int main()
{
	Derived objD1(1,2,3),objD2(-4,-5,-6);
	objD1.print();
	objD2.print();

	return 0;
}