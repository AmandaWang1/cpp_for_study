#include <iostream>
#include <fstream>
#include <string>
#include "get.h"

using namespace std;

//��������ļ�������ֱ�Ӵ򿪱ȽϺ�
 //�����������ļ�����Ҫ�򿪵��ļ�����
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

	//����һ��������
	ifstream inFile;
	if(!open_file(inFile,fileName))
	{
		cout<<"error:cannot open file ��"<< fileName<<endl;
		return -1;
	}

	//��ȡ�ļ�����
	get(inFile);
	inFile.close();

	return 0;
}