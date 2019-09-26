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
	void 存钱(double money)
	{
		this->amount += money;
	}
	//返回利率
	static double rate()
	{
		return inerestRate;
	}
	//修改利率
	static void rate(double newRate)
	{
		inerestRate = newRate;
	}

private:
	std::string owner;
	double amount;
	static double inerestRate;   //(利率)只有一个

};

double Account::inerestRate = 0.015; //（初始化）

int main()
{
	Account a("apple", 1000);
	a.存钱(300);
	Account b("banbana", 2000);
	b.存钱(100);

	cout <<"apple存进去的钱：" <<a.getAmount() << endl;
	cout <<"banbana存进去的钱：" << b.getAmount() << endl;
	cout << a.rate() << endl;
	a.rate(0.018);
	cout << b.rate() << endl;

	Account::rate(0.02);
	a.applyint();
	b.applyint();
	cout << "apple现在的钱：" << a.getAmount() << endl;
	cout << "banbana现在的钱：" << b.getAmount() << endl;


	return 0;
}