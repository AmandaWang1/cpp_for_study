#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	/* 4�ֳ�ʼ����ʽ */
	string  s1;			//ûдС���ţ�����stringĬ�Ϲ��캯��
	string s2("hello"); //С���� ����string����Ĺ��캯��
	string s3(s2);
	string s4(10,'a');

	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;

	cout<<endl;
	
	/* ������� */
	cout<<"���һ��"<<endl;
	string s;
	getline(cin,s);
	cout<<s<<endl;
	
	/* һ�ζ�һ��дһ�У������� */
/*	cout<<"һ��һ�е�����"<<endl;
	string line;
	while(getline(cin,line))
		cout<<line<<endl;*/

	/* һ�ζ�һ���ʵ����� */
	cout<<"һ��һ���ʵ�����"<<endl;
	string word;
	while(cin>>word)
		cout<<word<<endl;

	return 0;
}