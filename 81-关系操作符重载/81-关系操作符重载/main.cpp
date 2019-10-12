#include <iostream>
#include <string>

using namespace std;

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
	friend bool operator == (const Sales_item&,const Sales_item&);

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

/* ����໥��ϵ�����������أ������أ�=ʱ����������==�ĺ��� */
inline bool operator==(const Sales_item& lhs,const Sales_item& rhs)
{
	return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.isbn  == rhs.isbn;
}

inline bool operator!=(const Sales_item& lhs,const Sales_item& rhs)
{
	return !(lhs == rhs);
}

int main()
{
	Sales_item a((string)"2-232",10,12.0);
	Sales_item b((string)"2-232",10,12.0);
	Sales_item c((string)"2-333",10,12.0);

	if(a == b)
	{
		cout<<"���۵�a�����۵�b��һ����"<<endl;
	}
	if(a !=c )
	{
		cout<<"���۵�a�����۵�c�ǲ�һ����"<<endl;
	}


	return 0;
}