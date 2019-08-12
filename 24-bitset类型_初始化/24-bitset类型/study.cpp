#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<8> a;  //a�Ĵ�С��8λ�����ƣ�ȫ������0
	cout<<a<<endl;

	bitset<8> b(0xff);
	cout<<b<<endl;

	bitset<8> c(56);
	cout<<c<<endl;

	string str("10110101010010101001");
	bitset<8> d(str,5,4); //���ַ�������λ��ʼ��ע�������\0��������λ����ʼ��bitset
	cout<<d<<endl;
	bitset<8> e(str,str.size()-4); //���ַ������ĸ���ʼ��bitset
	cout<<e<<endl;

	return 0;
}