#include <iostream>
#include <string>

using namespace std;

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

void print_total_1(ostream &os,const Item_base item,size_t n)
{
	os<<"ISBN:"<<item.book()<<"\t number sold:"<<n<<"\t totalprice:"<<item.net_price(n)<<endl;
}

void print_total_2(ostream &os,const Item_base *item,size_t n)
{
	os<<"ISBN:"<<item->book()<<"\t number sold:"<<n<<"\t totalprice:"<<item->net_price(n)<<endl; //因为是指针，所以要用箭头操作符
}

void print_total_3(ostream &os,const Item_base &item,size_t n)
{
	os<<"ISBN:"<<item.book()<<"\t number sold:"<<n<<"\t totalprice:"<<item.net_price(10)<<endl;
}

int main()
{
	Item_base item("0-09-12",9.9);
	Bulk_item item2("0-09-12",9.9,10,0.12);

	print_total_1(cout,item,10);
	print_total_1(cout,item2,10);  //对象转换  //派生类会自己转换为基类（有问题）
	cout<<endl;

	print_total_2(cout,&item,10);
	print_total_2(cout,&item2,10); //指针转换（无问题）
	cout<<endl;

	print_total_3(cout,item,10);
	print_total_3(cout,item2,10); //引用转换（无问题）
	cout<<endl;

	Bulk_item *p = static_cast<Bulk_item *>(&item);
	cout<<p->net_price(10)<<endl;

	return 0;
}