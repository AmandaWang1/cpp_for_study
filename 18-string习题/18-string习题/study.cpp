/*
	ϰ�⣺
	��һ�����򣬴�string������ȥ��������
	��Ҫ��������ַ������뺬�б����ţ���
	����Ľ���Ǳ����ŵ��ַ���
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s1;
	string result;
	char ch;
	bool test = false;

	getline(cin,s1);    //�����ַ���

	string::size_type i;
	for(i=0;i<s1.size();i++)   //�����ַ���
	{
		ch = s1[i];
		if(ispunct(ch))       //��������˱��
			test = true;
		else
			result = result + ch;
	}

	if(test = true)
		cout<<"ȥ��������֮����ַ���Ϊ��"<<result<<endl;
	else
		cout<<"û�з��ֱ����ţ�"<<endl;

	return 0;
}