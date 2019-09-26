#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person():钱(0)     //类的构造函数
	{

	}

public:
	int 钱;
};

class sales_item    //销售项目   //class要变成对象才能使用
{
public:

	//double ave_price()   const;//函数声明原型

	//类的成员函数，用来判断两本书是不是同一本书
	bool same_isbn(const sales_item &rhs) const  //表示这个函数不对数据做任何修改
	{
		return this->isbn == rhs.isbn;
	}

public:
	sales_item():units_sold(0),revenue(0)
	{
		//或者在这里初始化
		/*this->units_sold = 0;
		this->revenue = 0;*/
	}

public:
	string isbn;   //书号
	unsigned units_sold;  //数量
	double revenue;  //总钱数
};


int main()
{
	//a,我都是对象，原来没有这两个对象
	Person a;  //创建对象a时，通过调用Person的构造函数创建对象
	Person 我;  //这一行就是创建对象

	cout<<我.钱<<endl;

	return 0;
}