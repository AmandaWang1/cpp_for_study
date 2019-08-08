#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	cout<<"请输入一个字符串：";
	cin>>s1;

	/* 把字符串拆分成一个个的字母 */
	string::size_type i;   // 专门用来表示字符串长度的数据类型
	for(i=0;i<s1.size();i++)
		cout<<s1[i]<<endl;

	/* 字符串的更改 */
	for( i=1;i<(s1.size()-1);i++ )
		s1[i] = '*';
	cout<<s1<<endl;

	return 0;
}