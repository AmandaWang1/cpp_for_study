#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person():Ǯ(0)     //��Ĺ��캯��
	{

	}

public:
	int Ǯ;
};

class sales_item    //������Ŀ   //classҪ��ɶ������ʹ��
{
public:

	//double ave_price()   const;//��������ԭ��

	//��ĳ�Ա�����������ж��������ǲ���ͬһ����
	bool same_isbn(const sales_item &rhs) const  //��ʾ������������������κ��޸�
	{
		return this->isbn == rhs.isbn;
	}

public:
	sales_item():units_sold(0),revenue(0)
	{
		//�����������ʼ��
		/*this->units_sold = 0;
		this->revenue = 0;*/
	}

public:
	string isbn;   //���
	unsigned units_sold;  //����
	double revenue;  //��Ǯ��
};


int main()
{
	//a,�Ҷ��Ƕ���ԭ��û������������
	Person a;  //��������aʱ��ͨ������Person�Ĺ��캯����������
	Person ��;  //��һ�о��Ǵ�������

	cout<<��.Ǯ<<endl;

	return 0;
}