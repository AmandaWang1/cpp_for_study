/*  题目3：											   *
	编写程序，从标准输入读取多个string对象，
	把他们连接起来，存放到一个更大的string对象中，
 *	并输出连接后的string对象                           */

/*  题目4：											   *
	编写程序，从标准输入读取多个string对象，
	把他们连接起来，中间加上空格，
	然后存放到一个更大的string对象中，
 *	并输出连接后的string对象                           */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2;

	cout<<"请输入字符串，按ctrl+Z停止"<<endl;

	/********* 题目3 *********/
	//while(cin>>s1)
	//	s2 = s2 + s1;

	/********* 题目4 *********/
	while(cin>>s1)
	{
		if(s2.empty()) //如果是第一个单词，前面不用加空格
			s2 = s1;
		else
			s2 = s2 +' '+ s1;
	}

	cout<<"最后得到的连接后的字符串："<<endl<<s2<<endl;


	return 0;
}