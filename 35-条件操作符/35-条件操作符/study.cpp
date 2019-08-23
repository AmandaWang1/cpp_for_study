#include <iostream>

using namespace std;

int main()
{
	/* 用条件操作符判断两个数中较大的那个 */
	int a,b;
	cout<<"Please enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"The smaller one is "<<((a<b)?a:b)<<endl;

	return 0;
}