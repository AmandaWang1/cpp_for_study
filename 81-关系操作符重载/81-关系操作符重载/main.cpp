#include <iostream>
#include <string>

using namespace std;

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
	friend bool operator == (const Sales_item&,const Sales_item&);

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

/* 最好相互联系起来进行重载，即重载！=时调用了重载==的函数 */
inline bool operator==(const Sales_item& lhs,const Sales_item& rhs)
{
	return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.isbn  == rhs.isbn;
}

inline bool operator!=(const Sales_item& lhs,const Sales_item& rhs)
{
	return !(lhs == rhs);
}

int main()
{
	Sales_item a((string)"2-232",10,12.0);
	Sales_item b((string)"2-232",10,12.0);
	Sales_item c((string)"2-333",10,12.0);

	if(a == b)
	{
		cout<<"销售单a和销售单b是一样的"<<endl;
	}
	if(a !=c )
	{
		cout<<"销售单a和销售单c是不一样的"<<endl;
	}


	return 0;
}