#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	bitset<16> a;
	cout<<a<<endl;

	a[5] = 1;

	for( int i = 0; i<16; i=i+2 )
		a[i] = 1; // �ȼ���a.set(i)
	cout<<a<<endl;

	a.set();  //��a�ж����1
	cout<<a<<endl;

	a.reset(5);  //��a�е���λ���0
	cout<<a<<endl;

	a.flip();//ȫ����ת��0->1;1->0
	cout<<a<<endl;

	unsigned long b = a.to_ulong(); // �Ѷ����������ʮ����
	cout<<b<<endl;

	return 0;
}