#include <iostream>
#include <string>

using namespace std;

class sales_item
{
public:
	sales_item(std::string &book,unsigned &num,double &amount):isbn(book),units_sold(num),revenue(amount)
	{
	}

	double avg_price() const   //求平均价格
	{
		if (units_sold)
			return revenue / units_sold;
		else
			return 0;
	}

	bool same_isbn(sales_item &is)   const     //检查两个销售的是否是同一本书
	{
		return isbn == is.isbn;
	}

	double add(sales_item &num, sales_item &amount)	//把两个销售单加在一起
	{
		units_sold += num.units_sold;
		revenue += amount.revenue;
	}

private:
	std::string isbn;  //书号
	unsigned units_sold;   //销售数量
	double revenue;   //总金额
};

class Person
{
public:
	//利用构造函数的初始化列表进行初始化
	Person(const std::string &nam,const std::string &addr) :name(nam),adress(addr)
	{
		//name = nam;
		//adress = addr;
	}
	std::string getName() const   //没有修改成员函数，用const
	{
		return name;
	}
	std::string getAdress() const 
	{
		return adress;
	}
private:
	std::string name;
	std::string adress;
};

int main()
{
	Person a("王晨","河南理工大学");
	
	
	cout << a.getName() << endl;
	cout << a.getAdress() << endl;

	sales_item x(string("00-22"), 2, 20.00);
	sales_item y(string("00-22"), 2, 20.00);


	//system("pause");
	return 0;
}