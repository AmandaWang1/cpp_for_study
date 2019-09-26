#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void process(string s)
{
	cout<<s<<endl;
}

int main()
{
	vector<string> files;
	files.push_back("one.txt");
	files.push_back("two.txt");
	files.push_back("t.txt");
	files.push_back("three.txt");
	
	string s;
	vector<string>::const_iterator it = files.begin();
	while(it != files.end())
	{
		ifstream input (it ->c_str());
		if(!input)
		{
			cerr<<"error:can not open file："
				<<*it<<endl;
			input.clear();   //清除流
			++it;  // 去打开下一个文件
			//continue;
		}
		else
		{
			//如果打开成功
			while(input>>s)
				process(s);  //显示出来
			input.close();  //关闭流
			input.clear();  //恢复流
 			++it;       //去读下一个
		}
	}

	return 0;
}
