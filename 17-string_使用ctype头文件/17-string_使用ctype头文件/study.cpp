#include <iostream>
#include <string>
#include <cctype>

/* 
	<cctype>头文件里的一些函数：
	isalnum(c):用来检查字符是不是字母或数字
	isalpha(c):用来检查是不是字母
	iscntrl(c):用来检查是不是控制字符
	isdigit(c):用来检查是不是数字
	isxdigit(c):用来检查是不是十六进制数字
	islower(c):用来检查是不是小写字母
	isupper(c):用来检查是不是大写字母
	tolower(c):用来把字符变成小写
	toupper(c):用来把字符变成大写
	isspace(c):用来检查是不是空格

*/

using namespace std;

int main()
{
	string s1("Hello World!!!");
	string::size_type i;
	string::size_type j = 0;
	for(i=0;i<s1.size();i++)   //统计标点个数
	{
		if(ispunct(s1[i]))
			j++;
	}
	cout<<"标点符号的个数为："<<j<<endl;
		
	for(i=0;i<s1.size();i++)  //把字符串全变成小写
		s1[i] = tolower(s1[i]);
	cout<<"变成小写之后："<<s1<<endl;

	for(i=0;i<s1.size();i++)  //把字符串全变成大写
		s1[i] = toupper(s1[i]);
	cout<<"变成大写之后："<<s1<<endl;



	return 0;
}