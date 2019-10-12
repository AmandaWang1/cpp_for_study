#include <iostream>
#include <string>

using namespace std;

class Dog
{

};
class Cat
{

};

class Sales_item
{
public:
	//�๹�캯���������ݳ�Ա���г�ʼ��
	Sales_item(const std::string &book,const unsigned units,const double amount):
	  isbn(book),units_sold(units),revenue(amount)
	{}
	  //����+=��������������
	Sales_item& operator+=(const Sales_item&);
	  //����-=��������������
	Sales_item& operator-=(const Sales_item&);
	friend std::ostream& operator<<(std::ostream& out,const Sales_item& s);

private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};
Sales_item operator+(const Sales_item&,const Sales_item&);
Sales_item operator-(const Sales_item&,const Sales_item&);

//����+=�����������壩
Sales_item& Sales_item::operator+=(const Sales_item& rhs) //ֻ��һ����������һ��������thisָ��
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this; //���ص�ǰ����
}
//����-=�����������壩
Sales_item& Sales_item::operator-=(const Sales_item& rhs)//ֻ��һ����������һ��������thisָ��
{
	units_sold -= rhs.units_sold;
	revenue -= rhs.revenue;
	return *this;
}

Sales_item operator+(const Sales_item& lhs,const Sales_item& rhs)
{
	Sales_item ret(lhs);  //�ȴ���һ���µĶ������ڷ���
	ret += rhs;
	return ret;
}

Sales_item operator-(const Sales_item& lhs,const Sales_item& rhs)
{
	Sales_item ret(lhs);
	ret -= rhs;
	return ret;
}

//�������������
std::ostream& operator<<(std::ostream& out,const Sales_item& s)
{
	out<<s.isbn << "\t"<<s.units_sold<<"\t"<<s.revenue;
	return out;
}

int main()
{
	Dog dog;
	Cat cat;

	Sales_item item1(string("0-2-200"),10,12.3);
	Sales_item item2(string("0-2-200"),100,120.2);
	Sales_item result = item1 + item2;
	cout<<result<<endl;

	Sales_item item3(string("0-2-200"),3,4.3);
	result += item3;
	cout<<result<<endl;

	result -= item2;
	cout<<result<<endl;

	return 0;
}