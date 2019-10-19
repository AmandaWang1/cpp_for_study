#include <iostream>
#include <string>

using namespace std;

class Animal
{
	//��Ա��
};

class Dog : public Animal  //Dog�̳�Animal
{

};

class Item_base
{
private :
	string isbn;
protected:   //�ܱ����ĳ�Ա��ר���������̳�
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
	//�������ģ����̳к�������Ϳ��԰��麯�����¶��壬
	//��������麯�����Ͳ������¶��壬ֻ�ܼ̳�����֮��ȥʹ��
	virtual double net_price(size_t n) const  
	{
		return n*price;   //����۸�(����*����)
	}
};

class Bulk_item : public Item_base
{
private:
	size_t min_qty;  //��ʹ��۵�����
	double discount;
public:
	Bulk_item(const std::string &book = "", double Sales_price = 0.0, size_t qty = 0, double disc_rate = 0.0)
		:Item_base(book,Sales_price),min_qty(qty),discount(disc_rate)
	{}
	
	void test()
	{
		cout<<x<<endl;  //�����ù��е�
		cout<<price<<endl;  //�������ܱ�����
		//cout<<isbn<<endl;   ��������˽�е�
	}

	void test2(const Bulk_item &d,const Item_base &b)
	{
		cout<<d.x<<endl;
		cout<<d.price<<endl;
		cout<<b.x<<endl;
	//	cout<<b.price<<endl;  ��������
	}

	//���麯���������¶���
	double net_price(size_t cnt) const
	{
		if(cnt >= min_qty )   //�������������С�Ĵ����������ʹ���
		{
			return cnt*(1-discount)*price;
		}
		else
		{
			return cnt*price;
		}
	}


};

int main()
{
	Item_base item("0-09-12",9.9);
	cout<<item.book()<<' '<<item.net_price(10)<<endl;
	cout<<item.x<<endl;

	Bulk_item item2("0-09-12",9.9,10,0.12);
	cout<<item.book()<<' '<<item2.net_price(10)<<endl;
	cout<<item2.x<<endl;  //�����X�Ǵ�Item_base��̳�����

	item2.test();
	item2.test2(item2,item);

	return 0;
}