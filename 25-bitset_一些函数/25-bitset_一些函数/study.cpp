#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int i;
	cin>>i;
	bitset<16> a(i);
	cout<<"���������ת��Ϊ��������Ϊ"<<a<<endl;

	/****** ���a���Ƿ���1 ******/
	bool is_set = a.any();
	if(is_set)
		cout<<"a�����ٴ���һ��1"<<endl;
	bool is_not_set = a.none();
	if(is_not_set)
		cout<<"a��һ��1��û��"<<endl;

	/********** ͳ��a��1�ĸ��� ********/
	size_t bits_set = a.count();
	cout<<"a��һ����"<<bits_set<<"��1"<<endl;

	cout<<"a�Ĵ�С��"<<a.size()<<endl;

	cout<<"a��0�ĸ���Ϊ��"<<a.size()-a.count()<<endl;

	return 0;
}