#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a("hello world");
	string *p = &a;
	cout<<a<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;

	int b = 1;
	int *q = &b;
	b = b+2;
	cout<<b<<endl;
	*q = *q + 2;
	cout<<b<<endl;
	cout<<*q<<endl;

	int c = 10;
	int *pi;
	pi = &c;
	int **ppi = &pi;
	cout<<**ppi<<endl;


	return 0;
}