#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <int> ivec;  //ivec是空的，里面没有数据
	cout<<"原向量大小为："<<ivec.size()<<endl;

	/* 向向量中输入数据 */
	cout<<"请输入五个整数："<<endl;
	vector <int>::size_type i;
	int j;
	for(i = 0;i<5;i++)
	{
		cin>>j;
		ivec.push_back(j);
	}

	/* 输出向量中的数据 */
	cout<<"你输入的数据为："<<endl;
	vector <int>::size_type k;
	for(k=0;k<ivec.size();k++)
		cout<<ivec[k]<<endl;

	/* 向向量里输入字符串 */
	cout<<"下面请输入一些字符串(按ctrl+z结束)："<<endl;
	vector <string> text;
	string word;
	while(cin>>word)
		text.push_back(word);

	/* 从向量中读取字符串 */
	cout<<"你输入的字符串为："<<endl;
	vector<int>::size_type a;
	for(a=0;a<text.size();a++)
		cout<<text[a]<<endl;

	return 0;
}