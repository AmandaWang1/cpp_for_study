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
		cout<<"Base1�Ĺ��캯�������á�"<<endl;
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
		cout<<"Base2�Ĺ��캯�������á�"<<endl;
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
		cout<<"Base3ȱʡ�Ĺ��캯�������á�"<<endl;
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
		cout<<"Member�Ĺ��캯�������á�"<<endl;
	}
	int GetM()
	{
		return m;  //��������Member��˽�е����ݳ�Ա
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
	Member mem; //�����Ķ����Ա
};

//������û�ж�Base3���г�ʼ������Ĭ�ϵ���ȱʡ�Ĺ��캯��
Derived::Derived(int i,int j,int k,int l) :Base1(i),Base2(j),mem(k),d(l)  
{
	cout<<"������Ĺ��캯�������á�"<<endl;
}

void Derived::Print()
{
	Base1::print();
	Base2::print();
	Base3::print();

	cout<<mem.GetM()<<endl;   //�����Ա����
	cout<<d<<endl;    //����������Լ������ݳ�Աb
}

int main()
{
	Derived obj(1,2,3,4);
	obj.Print();
	
	return 0;
}