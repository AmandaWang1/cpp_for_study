#include <iostream>

using namespace std;

class father
{
public:
	int x;
};

class son : public father
{
public:
	int y;
};

class Base1
{
public:
	Base1(int i) : b1(i)
	{
		cout<<"Base1的构造函数被调用。"<<endl;
	}
	void print() const
	{
		cout<<b1<<endl;
	}
private:
	int b1;
};

class Base2
{
public:
	Base2(int i) : b2(i)
	{
		cout<<"Base2的构造函数被调用。"<<endl;
	}
	void print() const
	{
		cout<<b2<<endl;
	}
private:
	int b2;
};

class Base3
{
public:
	Base3() : b3(0)
	{
		cout<<"Base3缺省的构造函数被调用。"<<endl;
	}
	void print() const
	{
		cout<<b3<<endl;
	}
private:
	int b3;
};

class Member
{
public:
	Member(int i) : m(i)
	{
		cout<<"Member的构造函数被调用。"<<endl;
	}
	int GetM()
	{
		return m;  //用来返回Member中私有的数据成员
	}
private:
	int m;
};

class Derived : public Base2,public Base1,public Base3
{
public: 
	Derived(int i,int j,int k,int l);
	void Print();
private:
	int d;
	Member mem; //新增的对象成员
};

//在这里没有对Base3进行初始化，会默认调用缺省的构造函数
Derived::Derived(int i,int j,int k,int l) :Base1(i),Base2(j),mem(k),d(l)  
{
	cout<<"派生类的构造函数被调用。"<<endl;
}

void Derived::Print()
{
	Base1::print();
	Base2::print();
	Base3::print();

	cout<<mem.GetM()<<endl;   //输出成员对象
	cout<<d<<endl;    //输出派生类自己的数据成员b
}

int main()
{
	Derived obj(1,2,3,4);
	obj.Print();
	
	return 0;
}