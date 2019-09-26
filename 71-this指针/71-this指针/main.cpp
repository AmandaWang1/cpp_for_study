#include <iostream>
#include <string>
#include "Screen.h"
#include "Person.h"

using namespace std;


int main()
{
	Person p("王晨", "河南理工大学");
	Person p2("还是王晨","机械创新设计部");

	cout << p.getName() << endl;
	cout << p.getAdress() << endl;
	cout << p2.getName() << endl;
	cout << p2.getAdress() << endl;

	Screen myScreen(5, 3);
	cout << myScreen.get() << endl;
	myScreen.set(3,2,'B');
	cout << myScreen.get(3,2) << endl;

	//这两行是重点
	/*myScreen.move(2,3);
	myScreen.set('C');*/
	//等效写法
	myScreen.move(2, 3).set('C');


	cout << myScreen.get() << endl;

	myScreen.display(cout);
	cout << endl;

	return 0;
}