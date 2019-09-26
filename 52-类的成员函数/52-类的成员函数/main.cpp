#include <iostream>
#include <string>

using namespace std;

int sum(int x,int y)
{
	return x+y;
}

class sales_item    //������Ŀ   //classҪ��ɶ������ʹ��
{
public:

	double ave_price()   const;//��������ԭ��

	//��ĳ�Ա�����������ж��������ǲ���ͬһ����
	bool same_isbn(const sales_item &rhs) const  //��ʾ������������������κ��޸�
	{
		return this->isbn == rhs.isbn;
	}

public:
	string isbn;   //���
	unsigned units_sold;  //����
	double revenue;  //��Ǯ��
};

//��������涨�庯��
double sales_item::ave_price()  const
{
	if(this->units_sold)
		return (this->revenue / this->units_sold);        //����������������ݳ�Ա
	else
		return 0;
}

int main()
{
	//����
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
		cout<<"��ͬһ����"<<endl;
	}
	else
		cout<<"����ͬһ����"<<endl;

	return 0;
}