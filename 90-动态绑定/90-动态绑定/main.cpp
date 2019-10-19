#include <iostream>
#include <string>

using namespace std;

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

void print_total(ostream &os,Item_base *item,size_t n)
{
	os<<"Isbn:"<<item->book() <<"\t number sold:"<<n<<"\t total price:"<<item->net_price(n)<<endl;
}

int main()
{
	Item_base* a = new Item_base("1-2-3-1",11.0);
	Item_base* b = new Bulk_item("1-2-3-2",22.0,2,0.05);

	print_total(cout,a,2);
	print_total(cout,b,3);

	Item_base* books[5];                 //һ��ָ�����ָ��
	books[0] = new Item_base("0-099-1",10.0);  //���Դ���һ���������
	books[1] = new Bulk_item("0-099-2",20,6,0.05);  //Ҳ���Դ���һ�����������
	books[2] = new Item_base("0-099-1",30.0);
	books[3] = new Bulk_item("0-099-2",40,6,0.15);
	books[4] = new Bulk_item("0-099-2",50,2,0.18);

	int num[5];
	num[0] = 2;
	num[1] = 10;
	num[2] = 1;
	num[3] = 5;
	num[4] = 3;  //��

	for(int i = 0;i<5;i++)
	{
		print_total(cout,books[i],num[i]);
	}

	return 0;
}