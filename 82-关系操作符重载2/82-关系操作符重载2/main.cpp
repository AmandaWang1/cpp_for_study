#include <iostream>
#include <string>

using namespace std;

class Data
{
private:
	int month,day,year;
public:
	Data(int m=0, int d=0, int y=0):month(m),day(d),year(y)
	{}
	/* ��ϵ���������� */
	int operator==(Data& dt) const;
	int operator!=(Data& dt) const;
	int operator<(Data& dt) const;
	int operator>(Data& dt) const;
	/*int operator<=(Data& dt) const;
	int operator>=(Data& dt) const;*/
};

//���ص��ڲ�����
int Data::operator==(Data& dt) const
{
	return (this->month == dt.month) && (this->day == dt.day) && (this->year == dt.year);
}
//���ز����ڲ���������
int Data::operator!=(Data& dt) const
{
	return !(*this == dt);
}
//����С�ڲ�����
int Data::operator<(Data& dt) const
{
	//���������
	if(this->year == dt.year)
	{
		//����·����
		if(this->month == dt.month)
		{
			return this->day < dt.day;
		}
		return this->month < dt.month;
	}
	else
	{
		return this->year < dt.year;
	}
}
//���ش��ڲ�����
int Data::operator>(Data& dt) const
{
	return (!(*this < dt)) && (*this != dt);
}

int main()
{
	Data d1(2,14,2003);
	Data d2(2,14,2009);
	Data d3(2,14,2003);

	if(d1 < d2)
	{
		cout<<"d1С��d2"<<endl;
	}
	if(d2 > d1)
	{
		cout<<"d2����d1"<<endl;
	}
	if(d1 == d3)
	{
		cout<<"d1����d3"<<endl;
	}
	if(d1 != d2)
	{
		cout<<"d1������d2"<<endl;
	}
	return 0;
}