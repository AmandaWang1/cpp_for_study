#include <iostream>

using namespace std;

//ÄÚÁªº¯Êı
inline int sum(int a,int b)
{
	return a+b;
}

int main()
{
	int x[]={1,2,3,4,5,6,7};
	int y[]={1,2,3,4,5,6,7};

	for(int i = 0;i<7;i++)
		cout<<sum(x[i],y[i])<<endl;

	return 0;
}