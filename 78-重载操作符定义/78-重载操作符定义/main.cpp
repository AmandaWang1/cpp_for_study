#include <iostream>
#include "Sales_item.h"

using namespace std;

class Person
{
public:
	//重载操作符：加法
	void operator+ (const Person& rhs)
	{
		cout << "执行了重载的加法操作" << endl;
	}

private:
};

int main()
{
	int a, b;
	a = 12;
	b = 9;
	cout << a + b << endl;

	Person p1, p2;
	p1 + p2;   //对象和对象的加法，运用类中的加法重载操作
	
	Sales_item item1, item2;
	cin >> item1; //在Sales_item.h中重载了输入操作
	cin >> item2;
	cout << item1 + item2 << endl;


	return 0;
}