#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 ("hello ");
	string s2 ("world");
	string s3 = s1 + s2;   //��s1 s2����һ��ŵ�s3ĩβ
	s1+=s2;   //ֱ�Ӱ�s2�ŵ�s1ĩβ

	cout<<"1���Ӻ���ַ���Ϊ��"<<s3<<endl;
	cout<<"2���Ӻ���ַ���Ϊ��"<<s1<<endl;

	return 0;
}