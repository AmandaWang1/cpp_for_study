#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	string fileName,s;
	vector<string> svec;
	istringstream isstream;
	string word;
	fileName = "book.txt";

	ifstream inFile(fileName.c_str());

	if(!inFile)  //检查文件是否失败
		return -1;

	while(getline(inFile,s))  //用输入文件流把每一行都存到向量里
		svec.push_back(s);

	inFile.close();

	for(vector<string>::const_iterator iter = svec.begin();
		iter!=svec.end();iter++)
	{
		//cout<<*iter<<endl;     //输出
		isstream.str(*iter);   //把每一行都保存到输入字符串流中
		while(isstream>>word)    //每次读一个单词
		{
			cout<<word<<endl;  //清空
		}
		isstream.clear();
	}


	return 0;
}