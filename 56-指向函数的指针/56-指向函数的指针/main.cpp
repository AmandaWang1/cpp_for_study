#include <iostream>

using namespace std;

bool lengthCompare (const string &s1,const string &s2)
{
	return s1.size() == s2.size();
}

int main()
{
	//pf��һ��ָ�룬ָ������ָ�룺��������
	//pf��һ���ֲ����� 
	bool (*pf)(const string &,const string &);
	pf = &lengthCompare;
	cout<<(*pf)("hello","pointer")<<endl;

	return 0;
}