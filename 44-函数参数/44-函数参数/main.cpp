#include <iostream>

using namespace std;

void AddOne(int x)
{
	x = x+1;
}

void AddTwo(int *p)
{
	*p = *p+2;
}

void AddThree(int& x)
{
	x = x+3;
}

int main()
{
	int a,b,c;
	a=1;
	b=2;
	c=3;

	cout<<"加之前："<<a<<endl;
	//并没有真正的a传进去，传的是a的拷贝
	AddOne(a);
	cout<<"加之后："<<a<<endl;
	cout<<endl;

	cout<<"加之前："<<b<<endl;
	//把b的地址拷贝一个传进去
	AddTwo(&b);
	cout<<"加之前："<<b<<endl;
	cout<<endl;

	cout<<"加之前："<<c<<endl;
	//传的是真正的c，不是拷贝
	AddThree(c);
	cout<<"加之前："<<c<<endl;
	cout<<endl;

	return 0;
}