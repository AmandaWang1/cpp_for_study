#include <iostream>
#include <string>
#include "sales_item.h"

using namespace std;

int sum(int x,int y)
{
	return x+y;
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