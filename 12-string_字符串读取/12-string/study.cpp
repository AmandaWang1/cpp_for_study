#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	/* 4种初始化方式 */
	string  s1;			//没写小括号，调用string默认构造函数
	string s2("hello"); //小括号 调用string对象的构造函数
	string s3(s2);
	string s4(10,'a');

	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;

	cout<<endl;
	
	/* 输出整行 */
	cout<<"输出一行"<<endl;
	string s;
	getline(cin,s);
	cout<<s<<endl;
	
	/* 一次读一行写一行，到结束 */
/*	cout<<"一次一行到结束"<<endl;
	string line;
	while(getline(cin,line))
		cout<<line<<endl;*/

	/* 一次读一个词到结束 */
	cout<<"一次一个词到结束"<<endl;
	string word;
	while(cin>>word)
		cout<<word<<endl;

	return 0;
}