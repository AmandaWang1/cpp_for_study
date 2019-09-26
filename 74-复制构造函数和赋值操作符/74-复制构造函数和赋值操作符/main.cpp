#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sales_item
{
public:
	//���캯��
	Sales_item():units_sold(0), revenue(0.0)
	{
		cout << "Ĭ�ϵĹ��캯����������" << endl;
	}
	Sales_item(const std::string &book):isbn(book),units_sold(0),revenue(0.0)
	{
		cout << "���캯��Sales_item(const std::string &book)��������" << endl;
	}
	
	//���ƹ��캯��
	Sales_item(const Sales_item &orig):isbn(orig.isbn),units_sold(orig.units_sold),revenue(orig.revenue)
	{
		cout << "���ƹ��캯���������ˣ�" << endl;
	}
	//��ֵ������
	Sales_item& operator = (const Sales_item &rhs)
	{
		cout << "��ֵ��������������!" << endl;
		isbn = rhs.isbn;
		units_sold = rhs.units_sold;
		revenue = rhs.revenue;
		return *this;
	}

private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};

Sales_item foo(Sales_item item)
{
	Sales_item temp;
	temp = item;
	return temp;
}

class NoName
{
public:
	NoName() :pstring(new std::string),i(0),d(0)
	{
	}
	NoName(const NoName& other)
		:pstring(new std::string(*(other.pstring))),
		i(other.i),
		d(other.d)
	{}

private:
	std::string *pstring;
	int i;
	double d;
};

int main()
{
	NoName x,y;
	NoName z(x);

	Sales_item a;
	Sales_item b("010-110");

	Sales_item c(b);
	a = b;
	
	Sales_item item = string("99999-9999");

	cout << endl << "��һ��foo:" << endl;
	Sales_item ret;
	ret = foo(item);
	
	cout << endl << "��һ��vector:" << endl;
	vector<Sales_item> svec(5);

	cout << endl << "��һ������:" << endl;
	Sales_item primer_eds[] = {string("0-201-16487"),string("0-321-29398"),string("0-908-9999"),Sales_item()};

	return 0;
}