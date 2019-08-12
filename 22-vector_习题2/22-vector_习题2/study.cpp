/*
	习题三：
	读入一段文本到vector对象，每个单词存储为vector中的一个元素，
	把vector对象中的每个单词转化为大写字母，输出vector对象中转化后的元素。
	每八个单词为一行输出
 */

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	vector<string> num;
	string a;
	int b;

	cout<<"请输入一些字符串："<<endl;
	while(cin>>a)  //输入字符串a
		num.push_back(a);

	if(num.empty()) //如果没有输入
	{
		cout<<"没有输入？！"<<endl;
		return -1;
	}

	for( vector<int>::size_type a = 0; a<num.size(); a++ )//遍历向量元素
	{
		for( string::size_type b = 0; b<num[a].size();b++ )//遍历string中的字符
			if(islower(num[a][b]))  // 如果字符为小写
				num[a][b] = toupper(num[a][b]);//把这个字符变成大写

			cout<<num[a]<<' '; //输出变成大写之后的string

			if( (a+1)%8 == 0 )
				cout<<endl;

	}

	return 0;
}

