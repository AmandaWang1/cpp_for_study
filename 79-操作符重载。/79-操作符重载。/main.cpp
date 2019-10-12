#include <iostream>
#include <string>

using namespace std;

class Dog
{

};
class Sales_item
{
	friend ostream& operator<<(ostream& out,const Sales_item& s);
	friend istream& operator>>(istream& in,Sales_item& s);
public:
	Sales_item(string &book,unsigned units,double price):
	  isbn(book),units_sold(units),revenue(price*units)
	{}
	Sales_item():units_sold(0),revenue(0.0)
	{}
private:
	string isbn;
	unsigned units_sold;
	double revenue;
};

//������غ���
ostream& operator<<(ostream& out,const Sales_item& s)
{
	out<<s.isbn<<" "<<s.units_sold<<" "<<s.revenue;
	return out;
}
//�������������
istream& operator>>(istream& in,Sales_item& s)
{
	double price;
	in>>s.isbn>>s.units_sold>>price;
	if(in)  //�������ɹ�
		s.revenue = s.units_sold * price;
	else
		s = Sales_item();  //���¹���һ���յĶ���

	return in;
}

int main()
{
	Sales_item item(string("0-909-222"),2,25.00);
	cout<<"hello"<<endl;
	cout<<item<<endl;

	cin>>item;
	cout<<item<<endl;

	return 0;
}