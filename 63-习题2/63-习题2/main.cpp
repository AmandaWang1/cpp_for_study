#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int fileToVector(string fileName,vector<string>& svec)
{
	ifstream inFile (fileName.c_str());
	if(!inFile)   //�����ȡ����
		return 1;

	string s;
	//һ������һ��
	while(getline(inFile,s))
		svec.push_back(s);

	//һ������һ������
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
	cout<<"����һ�£�"<<endl;

	vector<string> svec;
	string fileName,s;

	cout<<"Enter filename �� "<<endl;
	cin>>fileName;

	switch(fileToVector(fileName,svec))
	{
	case 1:
		cout<<"error:cannot open file��"<<fileName<<endl;
		return -1;
	case 2:
		cout<<"error:system failure."<<endl;
		return -1;
	case 3:
		cout<<"error:read failure."<<endl;
	}

	cout<<"������������ݣ�"<<endl;
	for(vector<string>::iterator iter = svec.begin();
		iter != svec.end();++iter)
		cout<<*iter<<endl;
	cout<<"������"<<svec.size()<<endl;
	//cout<<"���ʣ�"<<svec.size()<<endl;


	return 0;
}