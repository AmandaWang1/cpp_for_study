#include <iostream>

using namespace std;

long digui(int n)
{
	if(n == 0)
		return 1;
	else
		return digui(n-1)*n;
}

int main()
{
	for(int i = 1;i<=10;i++)
		cout<<i<<"£¡= "<<digui(i)<<endl;

	return 0;
}