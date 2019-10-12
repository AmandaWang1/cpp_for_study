#include <iostream>
#include <string>

using namespace std;

class Dog
{

};
class Cat
{

};

class Sales_item
{
public:
	//类构造函数，对数据成员进行初始化
	Sales_item(const std::string &book,const unsigned units,const double amount):
	  isbn(book),units_sold(units),revenue(amount)
	{}
	  //重载+=操作符（声明）
	Sales_item& operator+=(const Sales_item&);
	  //重载-=操作符（声明）
	Sales_item& operator-=(const Sales_item&);
	friend std::ostream& operator<<(std::ostream& out,const Sales_item& s);

private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};
Sales_item operator+(const Sales_item&,const Sales_item&);
Sales_item operator-(const Sales_item&,const Sales_item&);

//重载+=操作符（定义）
Sales_item& Sales_item::operator+=(const Sales_item& rhs) //只有一个参数。另一个参数是this指针
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this; //返回当前对象
}
//重载-=操作符（定义）
Sales_item& Sales_item::operator-=(const Sales_item& rhs)//只有一个参数。另一个参数是this指针
{
	units_sold -= rhs.units_sold;
	revenue -= rhs.revenue;
	return *this;
}

Sales_item operator+(const Sales_item& lhs,const Sales_item& rhs)
{
	Sales_item ret(lhs);  //先创建一个新的对象，用于返回
	ret += rhs;
	return ret;
}

Sales_item operator-(const Sales_item& lhs,const Sales_item& rhs)
{
	Sales_item ret(lhs);
	ret -= rhs;
	return ret;
}

//输出操作符重载
std::ostream& operator<<(std::ostream& out,const Sales_item& s)
{
	out<<s.isbn << "\t"<<s.units_sold<<"\t"<<s.revenue;
	return out;
}

int main()
{
	Dog dog;
	Cat cat;

	Sales_item item1(string("0-2-200"),10,12.3);
	Sales_item item2(string("0-2-200"),100,120.2);
	Sales_item result = item1 + item2;
	cout<<result<<endl;

	Sales_item item3(string("0-2-200"),3,4.3);
	result += item3;
	cout<<result<<endl;

	result -= item2;
	cout<<result<<endl;

	return 0;
}