#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<8> a;  //a的大小是8位二进制，全部都是0
	cout<<a<<endl;

	bitset<8> b(0xff);
	cout<<b<<endl;

	bitset<8> c(56);
	cout<<c<<endl;

	string str("10110101010010101001");
	bitset<8> d(str,5,4); //从字符串第五位开始（注意最后有\0），用四位来初始化bitset
	cout<<d<<endl;
	bitset<8> e(str,str.size()-4); //用字符串后四个初始化bitset
	cout<<e<<endl;

	return 0;
}