/*
	ϰ�⣺
	��дһ��С���򣬴ӱ�׼�����ȡһϵ��string�����ַ�������
	Ѱ�������ظ����ֵĵ��ʣ�����Ӧ�õ����������������ĵ��ʵ�����λ�ã�
	�õ��ʵĺ���������ٴγ����Լ�������������ظ��������ĵ��ʣ�
	���û�е����ظ��������ʾ��Ϣ��
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1,s2;
	string s3;
	int num = 0;
	int max = 1;

	cout<<"Enters some words:(Ctrl+Z to end)"<<endl;
	while(cin>>s1)    //���뵥��
	{
		if(s1 == s2)   //���������������ȣ���������һ
			++num;
		else
		{
			if(num>max)     //������������������ģ����ظ��������ĵ��ʴ������
			{
				max = num;
				s3 = s2;
			}
			num = 0;     //�������������ĿС�����
		}
		s2 = s1;   //��s1��ֵ����s2
	}

	if(num>max)     //�Ƚ����һ�������Ƿ��ظ�
	{
		max = num;
		s3 = s2;
	}
	if(max == 1)
		cout<<"û���������ֵĵ���"<<endl;	
	else
		cout<<" "<<s3<<" ��������������ִ�����࣬���������� "<<max<<" �Ρ�"<<endl;

	return 0;
}