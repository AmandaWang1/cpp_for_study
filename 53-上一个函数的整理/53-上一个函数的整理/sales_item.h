#ifndef _SALES_ITEM_H
#define _SALES_ITEM_H

#include <string>

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
	std::string isbn;   //书号
	unsigned units_sold;  //数量
	double revenue;  //总钱数
};

#endif