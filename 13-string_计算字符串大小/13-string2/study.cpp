#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* 计算字符串大小 */
	string s("hello");
	cout<<"字符串大小为："<<s.size()<<endl;

	/* 把字符串大小赋值给变量 */
	string s1("hi");
	string::size_type size = s1.size();
	cout<<"字符串大小为："<<size<<endl;

	/* 空字符串处理方式 */
	string s2;
	if(s2.empty())
		cout<<"这是一个空字符串"<<endl;

	return 0;
}