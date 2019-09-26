#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int fileToVector(string fileName,vector<string>& svec)
{
	ifstream inFile (fileName.c_str());
	if(!inFile)   //如果读取出错
		return 1;

	string s;
	//一次输入一行
	while(getline(inFile,s))
		svec.push_back(s);

	//一次输入一个单词
	/*while(inFile>>s)
		svec.push_back(s);*/

	inFile.close();
	if(inFile.eof())
		return 4;
	if(inFile.bad())
		return 2;
	if(inFile.fail())
		return 3;
}

int main()
{
	cout<<"测试一下："<<endl;

	vector<string> svec;
	string fileName,s;

	cout<<"Enter filename ： "<<endl;
	cin>>fileName;

	switch(fileToVector(fileName,svec))
	{
	case 1:
		cout<<"error:cannot open file："<<fileName<<endl;
		return -1;
	case 2:
		cout<<"error:system failure."<<endl;
		return -1;
	case 3:
		cout<<"error:read failure."<<endl;
	}

	cout<<"向量里面的内容："<<endl;
	for(vector<string>::iterator iter = svec.begin();
		iter != svec.end();++iter)
		cout<<*iter<<endl;
	cout<<"行数："<<svec.size()<<endl;
	//cout<<"单词："<<svec.size()<<endl;


	return 0;
}