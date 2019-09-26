#include <iostream>
#include <string>
#include "Person.h"
#include "Sales_item.h"

using namespace std;

int main()
{
	Person a("уе╥и",22);
	cout << a.name <<' '<<a.age<< endl;

	Sales_item item1;
	Sales_item item2("0-201");
	Sales_item *p = new Sales_item();

	delete p;

	return 0;
}