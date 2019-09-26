#include <iostream>
#include <string>

using namespace std;

class sales_item
{
public:
	sales_item(std::string &book,unsigned &num,double &amount):isbn(book),units_sold(num),revenue(amount)
	{
	}

	double avg_price() const   //��ƽ���۸�
	{
		if (units_sold)
			return revenue / units_sold;
		else
			return 0;
	}

	bool same_isbn(sales_item &is)   const     //����������۵��Ƿ���ͬһ����
	{
		return isbn == is.isbn;
	}

	double add(sales_item &num, sales_item &amount)	//���������۵�����һ��
	{
		units_sold += num.units_sold;
		revenue += amount.revenue;
	}

private:
	std::string isbn;  //���
	unsigned units_sold;   //��������
	double revenue;   //�ܽ��
};

class Person
{
public:
	//���ù��캯���ĳ�ʼ���б���г�ʼ��
	Person(const std::string &nam,const std::string &addr) :name(nam),adress(addr)
	{
		//name = nam;
		//adress = addr;
	}
	std::string getName() const   //û���޸ĳ�Ա��������const
	{
		return name;
	}
	std::string getAdress() const 
	{
		return adress;
	}
private:
	std::string name;
	std::string adress;
};

int main()
{
	Person a("����","��������ѧ");
	
	
	cout << a.getName() << endl;
	cout << a.getAdress() << endl;

	sales_item x(string("00-22"), 2, 20.00);
	sales_item y(string("00-22"), 2, 20.00);


	//system("pause");
	return 0;
}