#include <iostream>
#include <string>
#include <cctype>

/* 
	<cctype>ͷ�ļ����һЩ������
	isalnum(c):��������ַ��ǲ�����ĸ������
	isalpha(c):��������ǲ�����ĸ
	iscntrl(c):��������ǲ��ǿ����ַ�
	isdigit(c):��������ǲ�������
	isxdigit(c):��������ǲ���ʮ����������
	islower(c):��������ǲ���Сд��ĸ
	isupper(c):��������ǲ��Ǵ�д��ĸ
	tolower(c):�������ַ����Сд
	toupper(c):�������ַ���ɴ�д
	isspace(c):��������ǲ��ǿո�

*/

using namespace std;

int main()
{
	string s1("Hello World!!!");
	string::size_type i;
	string::size_type j = 0;
	for(i=0;i<s1.size();i++)   //ͳ�Ʊ�����
	{
		if(ispunct(s1[i]))
			j++;
	}
	cout<<"�����ŵĸ���Ϊ��"<<j<<endl;
		
	for(i=0;i<s1.size();i++)  //���ַ���ȫ���Сд
		s1[i] = tolower(s1[i]);
	cout<<"���Сд֮��"<<s1<<endl;

	for(i=0;i<s1.size();i++)  //���ַ���ȫ��ɴ�д
		s1[i] = toupper(s1[i]);
	cout<<"��ɴ�д֮��"<<s1<<endl;



	return 0;
}