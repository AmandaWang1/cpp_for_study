/*
	习题：
	编写一个函数，函数的形参和返回值都是istream引用类型，
	该函数应一直读取流，直到文件结束符为止，还应该将内容输出到
	标准输出中，最后  流为有效，并返回该流。
 */


#include <iostream>
#include <string>
#include <fstream>
#include "get.h"

using namespace std;

int main()
{
	string fileName;
	cout<<"Enter file name："<<endl;
	cin >> fileName;

	ifstream inFile(fileName.c_str());
	if(!inFile)
	{
		cerr<<"Error:cannot open input file."<<fileName<<endl;
		return -1;
	}
	get(inFile);


	cout<<"测试新写的函数！"<<endl;

	double dval;
	get(cin);
	cout<<"继续使用cin,输入一个double:"<<endl;
	cin>>dval;
	cout<<"你输入的是："<<dval<<endl;


	return 0;
}