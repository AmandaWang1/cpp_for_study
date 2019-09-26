#include <iostream>
#include <fstream>
#include <string>
#include "get.h"

using namespace std;

//用这个打开文件比用流直接打开比较好
 //参数：输入文件流和要打开的文件名称
ifstream& open_file(ifstream &in,const string &file)
{
	in.close();
	in.clear();
	in.open(file.c_str());

	return in;
}

int main()
{
	string fileName,s;
	cout<<"Enter filename : "<<endl;
	cin>>fileName;

	//创建一个流对象
	ifstream inFile;
	if(!open_file(inFile,fileName))
	{
		cout<<"error:cannot open file ！"<< fileName<<endl;
		return -1;
	}

	//读取文件内容
	get(inFile);
	inFile.close();

	return 0;
}