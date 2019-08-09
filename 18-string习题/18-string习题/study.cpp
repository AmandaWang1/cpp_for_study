/*
	习题：
	编一个程序，从string对象中去掉标点符号
	（要求输入的字符串必须含有标点符号），
	输出的结果是标点符号的字符串
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s1;
	string result;
	char ch;
	bool test = false;

	getline(cin,s1);    //输入字符串

	string::size_type i;
	for(i=0;i<s1.size();i++)   //遍历字符串
	{
		ch = s1[i];
		if(ispunct(ch))       //如果发现了标点
			test = true;
		else
			result = result + ch;
	}

	if(test = true)
		cout<<"去掉标点符号之后的字符串为："<<result<<endl;
	else
		cout<<"没有发现标点符号！"<<endl;

	return 0;
}