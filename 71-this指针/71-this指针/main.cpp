#include <iostream>
#include <string>
#include "Screen.h"
#include "Person.h"

using namespace std;


int main()
{
	Person p("����", "��������ѧ");
	Person p2("��������","��е������Ʋ�");

	cout << p.getName() << endl;
	cout << p.getAdress() << endl;
	cout << p2.getName() << endl;
	cout << p2.getAdress() << endl;

	Screen myScreen(5, 3);
	cout << myScreen.get() << endl;
	myScreen.set(3,2,'B');
	cout << myScreen.get(3,2) << endl;

	//���������ص�
	/*myScreen.move(2,3);
	myScreen.set('C');*/
	//��Чд��
	myScreen.move(2, 3).set('C');


	cout << myScreen.get() << endl;

	myScreen.display(cout);
	cout << endl;

	return 0;
}