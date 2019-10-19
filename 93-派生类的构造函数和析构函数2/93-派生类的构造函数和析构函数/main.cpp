#include <iostream>

using namespace std;

class Base
{
public:
	Base()   //ȱʡ(û�в���)�Ĺ��캯��
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
	cout<<"Base�Ĺ��캯��������:"<<b1<<","<<b2<<endl;
}

Base::~Base()
{
	cout<<"Base���������������ã�"<<b1<<","<<b2<<",";
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
	cout<<"Derived�Ĺ��캯�������ã�"<<d<<endl;
}

Derived::~Derived()
{
	cout<<"Derived���������������ã�"<<d<<endl;
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