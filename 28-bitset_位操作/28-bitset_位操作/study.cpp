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

	cout<<(a & b)<<endl; //位与，全为1是1，否则为0
	cout<<(a | b)<<endl; //位或，有一个是1就是1
	cout<<(a ^ b)<<endl; //异或，相同为1，不同为0

	return 0;
}