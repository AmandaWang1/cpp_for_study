#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	cout<<"������һ���ַ�����";
	cin>>s1;

	/* ���ַ�����ֳ�һ��������ĸ */
	string::size_type i;   // ר��������ʾ�ַ������ȵ���������
	for(i=0;i<s1.size();i++)
		cout<<s1[i]<<endl;

	/* �ַ����ĸ��� */
	for( i=1;i<(s1.size()-1);i++ )
		s1[i] = '*';
	cout<<s1<<endl;

	return 0;
}