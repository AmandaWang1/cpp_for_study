#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<10> a(100);
	bitset<10> b(152);
	cout<<a<<endl;
	cout<<b<<endl;

	cout<<(a & b)<<endl; //λ�룬ȫΪ1��1������Ϊ0
	cout<<(a | b)<<endl; //λ����һ����1����1
	cout<<(a ^ b)<<endl; //�����ͬΪ1����ͬΪ0

	return 0;
}