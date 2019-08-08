#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 ("hello ");
	string s2 ("world");
	string s3 = s1 + s2;   //把s1 s2接在一起放到s3末尾
	s1+=s2;   //直接把s2放到s1末尾

	cout<<"1连接后的字符串为："<<s3<<endl;
	cout<<"2连接后的字符串为："<<s1<<endl;

	return 0;
}