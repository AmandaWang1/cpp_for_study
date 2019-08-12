#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	bitset<16> a;
	cout<<a<<endl;

	a[5] = 1;

	for( int i = 0; i<16; i=i+2 )
		a[i] = 1; // 等价于a.set(i)
	cout<<a<<endl;

	a.set();  //把a中都变成1
	cout<<a<<endl;

	a.reset(5);  //把a中第五位变成0
	cout<<a<<endl;

	a.flip();//全部翻转，0->1;1->0
	cout<<a<<endl;

	unsigned long b = a.to_ulong(); // 把二进制数变成十进制
	cout<<b<<endl;

	return 0;
}