/*
	ϰ������
	����һ���ı���vector����ÿ�����ʴ洢Ϊvector�е�һ��Ԫ�أ�
	��vector�����е�ÿ������ת��Ϊ��д��ĸ�����vector������ת�����Ԫ�ء�
	ÿ�˸�����Ϊһ�����
 */

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	vector<string> num;
	string a;
	int b;

	cout<<"������һЩ�ַ�����"<<endl;
	while(cin>>a)  //�����ַ���a
		num.push_back(a);

	if(num.empty()) //���û������
	{
		cout<<"û�����룿��"<<endl;
		return -1;
	}

	for( vector<int>::size_type a = 0; a<num.size(); a++ )//��������Ԫ��
	{
		for( string::size_type b = 0; b<num[a].size();b++ )//����string�е��ַ�
			if(islower(num[a][b]))  // ����ַ�ΪСд
				num[a][b] = toupper(num[a][b]);//������ַ���ɴ�д

			cout<<num[a]<<' '; //�����ɴ�д֮���string

			if( (a+1)%8 == 0 )
				cout<<endl;

	}

	return 0;
}

