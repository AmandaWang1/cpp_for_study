#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* �����ַ�����С */
	string s("hello");
	cout<<"�ַ�����СΪ��"<<s.size()<<endl;

	/* ���ַ�����С��ֵ������ */
	string s1("hi");
	string::size_type size = s1.size();
	cout<<"�ַ�����СΪ��"<<size<<endl;

	/* ���ַ�������ʽ */
	string s2;
	if(s2.empty())
		cout<<"����һ�����ַ���"<<endl;

	return 0;
}