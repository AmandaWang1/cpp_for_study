#include <iostream>
#include "Sales_item.h"

using namespace std;

class Person
{
public:
	//���ز��������ӷ�
	void operator+ (const Person& rhs)
	{
		cout << "ִ�������صļӷ�����" << endl;
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
	p1 + p2;   //����Ͷ���ļӷ����������еļӷ����ز���
	
	Sales_item item1, item2;
	cin >> item1; //��Sales_item.h���������������
	cin >> item2;
	cout << item1 + item2 << endl;


	return 0;
}