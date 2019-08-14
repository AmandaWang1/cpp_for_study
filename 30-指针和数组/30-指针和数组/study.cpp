#include <iostream>

using namespace std;

int main()
{
	int a[10] = {3,4,5,6,7};
	int *p = a;
	cout<<*a<<endl;
	cout<<*p<<endl;

	p = &a[4];
	cout<<*p<<endl;

	return 0;
}