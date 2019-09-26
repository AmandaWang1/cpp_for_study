#include <iostream>
#include <string>

using namespace std;

int sum(int x,int y)
{
	return x+y;
}

class sales_item    //销售项目   //class要变成对象才能使用
{
public:

	double ave_price()   const;//函数声明原型

	//类的成员函数，用来判断两本书是不是同一本书
	bool same_isbn(const sales_item &rhs) const  //表示这个函数不对数据做任何修改
	{
		return this->isbn == rhs.isbn;
	}

public:
	string isbn;   //书号
	unsigned units_sold;  //数量
	double revenue;  //总钱数
};

//在类的外面定义函数
double sales_item::ave_price()  const
{
	if(this->units_sold)
		return (this->revenue / this->units_sold);        //这两个都是类的数据成员
	else
		return 0;
}

int main()
{
	//对象
	sales_item item1,item2;

	item1.isbn = "0-201-78345-X";
	item1.units_sold = 10;
	item1.revenue = 300.00;

	cout<<item1.ave_price()<<endl;

	item2.isbn = "0-201-78345-X";
	item2.units_sold = 2;
	item2.revenue = 70.00;

	cout<<item2.ave_price()<<endl;

	if(item1.same_isbn(item2))
	{
		cout<<"是同一本书"<<endl;
	}
	else
		cout<<"不是同一本书"<<endl;

	return 0;
}