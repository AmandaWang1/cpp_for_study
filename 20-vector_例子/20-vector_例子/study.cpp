#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <int> ivec;  //ivec�ǿյģ�����û������
	cout<<"ԭ������СΪ��"<<ivec.size()<<endl;

	/* ���������������� */
	cout<<"���������������"<<endl;
	vector <int>::size_type i;
	int j;
	for(i = 0;i<5;i++)
	{
		cin>>j;
		ivec.push_back(j);
	}

	/* ��������е����� */
	cout<<"�����������Ϊ��"<<endl;
	vector <int>::size_type k;
	for(k=0;k<ivec.size();k++)
		cout<<ivec[k]<<endl;

	/* �������������ַ��� */
	cout<<"����������һЩ�ַ���(��ctrl+z����)��"<<endl;
	vector <string> text;
	string word;
	while(cin>>word)
		text.push_back(word);

	/* �������ж�ȡ�ַ��� */
	cout<<"��������ַ���Ϊ��"<<endl;
	vector<int>::size_type a;
	for(a=0;a<text.size();a++)
		cout<<text[a]<<endl;

	return 0;
}