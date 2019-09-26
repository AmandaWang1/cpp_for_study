#ifndef _SALES_ITEM_H
#define _SALES_ITEM_H

#include <iostream>
#include <string>

class Sales_item
{
public:
	explicit Sales_item(const std::string &book) :isbn(book), units_sold(0), revenue(0.0)
	{}
	explicit Sales_item(std::istream &is)     //创建一个输入流对象
	{
		is >> *this;
	}
	explicit Sales_item() :units_sold(0), revenue(0.0)
	{}
	explicit Sales_item(int units, double price)
	{
		this->units_sold = units;
		this->revenue = units * price;
	}
	explicit Sales_item(const std::string &book, int units, double amount) :isbn(book), units_sold(units), revenue(amount)
	{

	}

	friend std::istream& operator>>(std::istream&, Sales_item&);  //用有员函数做了一个流输入操作符的重载

private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};



#endif /*_SALES_ITEM_H*/