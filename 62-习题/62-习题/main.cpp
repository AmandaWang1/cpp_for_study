/*
	ϰ�⣺
	��дһ���������������βκͷ���ֵ����istream�������ͣ�
	�ú���Ӧһֱ��ȡ����ֱ���ļ�������Ϊֹ����Ӧ�ý����������
	��׼����У����  ��Ϊ��Ч�������ظ�����
 */


#include <iostream>
#include <string>
#include <fstream>
#include "get.h"

using namespace std;

int main()
{
	string fileName;
	cout<<"Enter file name��"<<endl;
	cin >> fileName;

	ifstream inFile(fileName.c_str());
	if(!inFile)
	{
		cerr<<"Error:cannot open input file."<<fileName<<endl;
		return -1;
	}
	get(inFile);


	cout<<"������д�ĺ�����"<<endl;

	double dval;
	get(cin);
	cout<<"����ʹ��cin,����һ��double:"<<endl;
	cin>>dval;
	cout<<"��������ǣ�"<<dval<<endl;


	return 0;
}