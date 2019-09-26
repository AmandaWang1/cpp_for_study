#include <iostream>
#include <string>

using namespace std;

string init()
{
	return "hello";
}

void fcn()
{
	//int init = 0;  //注意：变量名和函数重名，上面的函数就被隐藏（屏蔽）了
	string s = init();
	cout<<s<<endl;
}

int main()
{
	fcn(); 
	return 0;
}