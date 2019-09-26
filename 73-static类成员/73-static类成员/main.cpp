#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
	Account(std::string name, double money):owner(name),amount(money)
	{
	}
	double getAmount() const
	{
		return this->amount;
	}
	void applyint()
	{
		amount += amount * inerestRate;
	}
	void ��Ǯ(double money)
	{
		this->amount += money;
	}
	//��������
	static double rate()
	{
		return inerestRate;
	}
	//�޸�����
	static void rate(double newRate)
	{
		inerestRate = newRate;
	}

private:
	std::string owner;
	double amount;
	static double inerestRate;   //(����)ֻ��һ��

};

double Account::inerestRate = 0.015; //����ʼ����

int main()
{
	Account a("apple", 1000);
	a.��Ǯ(300);
	Account b("banbana", 2000);
	b.��Ǯ(100);

	cout <<"apple���ȥ��Ǯ��" <<a.getAmount() << endl;
	cout <<"banbana���ȥ��Ǯ��" << b.getAmount() << endl;
	cout << a.rate() << endl;
	a.rate(0.018);
	cout << b.rate() << endl;

	Account::rate(0.02);
	a.applyint();
	b.applyint();
	cout << "apple���ڵ�Ǯ��" << a.getAmount() << endl;
	cout << "banbana���ڵ�Ǯ��" << b.getAmount() << endl;


	return 0;
}