/*
	习题：
	编写一个小程序，从标准输入读取一系列string类型字符串对象，
	寻找连续重复出现的单词，程序应该导出满足以下条件的单词的输入位置，
	该单词的后面紧跟着再次出现自己本身，输出连续重复次数最多的单词，
	如果没有单词重复，输出提示信息。
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1,s2;
	string s3;
	int num = 0;
	int max = 1;

	cout<<"Enters some words:(Ctrl+Z to end)"<<endl;
	while(cin>>s1)    //输入单词
	{
		if(s1 == s2)   //如果有两个单词相等，计数器加一
			++num;
		else
		{
			if(num>max)     //如果出现连续单词最大的，把重复次数最多的单词存放起来
			{
				max = num;
				s3 = s2;
			}
			num = 0;     //如果连续单词数目小于最大
		}
		s2 = s1;   //把s1的值赋给s2
	}

	if(num>max)     //比较最后一个单词是否重复
	{
		max = num;
		s3 = s2;
	}
	if(max == 1)
		cout<<"没有连续出现的单词"<<endl;	
	else
		cout<<" "<<s3<<" 这个单词连续出现次数最多，共连续出现 "<<max<<" 次。"<<endl;

	return 0;
}