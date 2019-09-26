#include <iostream>
#include <string>
#include "plain-ptr.h"
#include "value-ptr.h"
#include "smart-ptr.h"

using namespace std;

void test_AHasPtr()
{
	int i = 42;
	AHasPtr p1(&i, 42);
	AHasPtr p2 = p1;
	cout << p2.get_ptr_val() << endl;

	p1.set_ptr_val(0);
	cout << p2.get_ptr_val() << endl;

	int *ip = new int(42);
	AHasPtr ptr(ip, 10);
	cout << ptr.get_ptr_val() << endl;
	delete ip;
	cout << ptr.get_ptr_val() << endl;   //��ʱ�����ָ����ָ���42�Ѿ���������
}

void test_CHasPtr()
{
	int a, b;
	a = 5;
	b = a;
	b = 9;
						

	int obj = 0;

	CHasPtr ptr1(obj,42);
	CHasPtr ptr2(ptr1);
	cout << ptr1.get_ptr_val() << ","<<ptr1.get_int()<<endl;
	cout << ptr2.get_ptr_val() << ","<< ptr2.get_int() << endl;
	ptr2.set_ptr_val(6);
	ptr2.set_int(48);
	cout << "�޸�֮��" << endl;
	cout << ptr1.get_ptr_val() << "," << ptr1.get_int() << endl;
	cout << ptr2.get_ptr_val() << "," << ptr2.get_int() << endl;
}

int main()
{
	cout << "����ָ�룺" << endl;
	test_AHasPtr();
	cout << endl << "ֵ���ࣺ" << endl;
	test_CHasPtr();
	return 0;
}