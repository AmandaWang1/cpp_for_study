#include "sales_item.h"

//在类的外面定义函数
double sales_item::ave_price()  const
{
	if(this->units_sold)
		return (this->revenue / this->units_sold);        //这两个都是类的数据成员
	else
		return 0;
}