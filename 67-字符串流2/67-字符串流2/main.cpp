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

	if(!inFile)  //����ļ��Ƿ�ʧ��
		return -1;

	while(getline(inFile,s))  //�������ļ�����ÿһ�ж��浽������
		svec.push_back(s);

	inFile.close();

	for(vector<string>::const_iterator iter = svec.begin();
		iter!=svec.end();iter++)
	{
		//cout<<*iter<<endl;     //���
		isstream.str(*iter);   //��ÿһ�ж����浽�����ַ�������
		while(isstream>>word)    //ÿ�ζ�һ������
		{
			cout<<word<<endl;  //���
		}
		isstream.clear();
	}


	return 0;
}