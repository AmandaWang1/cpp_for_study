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
			cerr<<"error:can not open file��"
				<<*it<<endl;
			input.clear();   //�����
			++it;  // ȥ����һ���ļ�
			//continue;
		}
		else
		{
			//����򿪳ɹ�
			while(input>>s)
				process(s);  //��ʾ����
			input.close();  //�ر���
			input.clear();  //�ָ���
 			++it;       //ȥ����һ��
		}
	}

	return 0;
}
