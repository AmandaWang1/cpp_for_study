#include <iostream>
#include <string>

using namespace std;

class Animal
{
	//成员略
};

class Dog : public Animal  //Dog继承Animal
{

};

class Item_base
{
private :
	string isbn;
protected:   //受保护的成员，专门用来做继承
	double price;
public:
	int x;
	Item_base(const string &book = "",
		double sales_price = 0.0, int y = 1 ):isbn(book),price(sales_price),x(y)
	{}
	string book() const
	{
		return isbn;
	}
	//定义成虚的，被继承后，派生类就可以把虚函数重新定义，
	//如果不是虚函数，就不能重新定义，只能继承下来之后去使用
	virtual double net_price(size_t n) const  
	{
		return n*price;   //计算价格(数量*单价)
	}
};

class Bulk_item : public Item_base
{
private:
	size_t min_qty;  //最低打折的数量
	double discount;
public:
	Bulk_item(const std::string &book = "", double Sales_price = 0.0, size_t qty = 0, double disc_rate = 0.0)
		:Item_base(book,Sales_price),min_qty(qty),discount(disc_rate)
	{}
	
	void test()
	{
		cout<<x<<endl;  //可以用公有的
		cout<<price<<endl;  //可以用受保护的
		//cout<<isbn<<endl;   不可以用私有的
	}

	void test2(const Bulk_item &d,const Item_base &b)
	{
		cout<<d.x<<endl;
		cout<<d.price<<endl;
		cout<<b.x<<endl;
	//	cout<<b.price<<endl;  不可以用
	}

	//对虚函数进行重新定义
	double net_price(size_t cnt) const
	{
		if(cnt >= min_qty )   //如果数量大于最小的打折数量，就打折
		{
			return cnt*(1-discount)*price;
		}
		else
		{
			return cnt*price;
		}
	}


};

int main()
{
	Item_base item("0-09-12",9.9);
	cout<<item.book()<<' '<<item.net_price(10)<<endl;
	cout<<item.x<<endl;

	Bulk_item item2("0-09-12",9.9,10,0.12);
	cout<<item.book()<<' '<<item2.net_price(10)<<endl;
	cout<<item2.x<<endl;  //这里的X是从Item_base里继承来的

	item2.test();
	item2.test2(item2,item);

	return 0;
}