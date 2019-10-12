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
	/* 关系操作符重载 */
	int operator==(Data& dt) const;
	int operator!=(Data& dt) const;
	int operator<(Data& dt) const;
	int operator>(Data& dt) const;
	/*int operator<=(Data& dt) const;
	int operator>=(Data& dt) const;*/
};

//重载等于操作符
int Data::operator==(Data& dt) const
{
	return (this->month == dt.month) && (this->day == dt.day) && (this->year == dt.year);
}
//重载不等于操作符重载
int Data::operator!=(Data& dt) const
{
	return !(*this == dt);
}
//重载小于操作符
int Data::operator<(Data& dt) const
{
	//如果年份相等
	if(this->year == dt.year)
	{
		//如果月份相等
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
//重载大于操作符
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
		cout<<"d1小于d2"<<endl;
	}
	if(d2 > d1)
	{
		cout<<"d2大于d1"<<endl;
	}
	if(d1 == d3)
	{
		cout<<"d1等于d3"<<endl;
	}
	if(d1 != d2)
	{
		cout<<"d1不等于d2"<<endl;
	}
	return 0;
}