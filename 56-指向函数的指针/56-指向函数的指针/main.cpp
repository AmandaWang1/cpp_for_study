#include <iostream>

using namespace std;

bool lengthCompare (const string &s1,const string &s2)
{
	return s1.size() == s2.size();
}

int main()
{
	//pf是一个指针，指向函数的指针：函数类型
	//pf是一个局部变量 
	bool (*pf)(const string &,const string &);
	pf = &lengthCompare;
	cout<<(*pf)("hello","pointer")<<endl;

	return 0;
}