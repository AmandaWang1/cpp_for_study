/*  ��Ŀ3��											   *
	��д���򣬴ӱ�׼�����ȡ���string����
	������������������ŵ�һ�������string�����У�
 *	��������Ӻ��string����                           */

/*  ��Ŀ4��											   *
	��д���򣬴ӱ�׼�����ȡ���string����
	�����������������м���Ͽո�
	Ȼ���ŵ�һ�������string�����У�
 *	��������Ӻ��string����                           */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2;

	cout<<"�������ַ�������ctrl+Zֹͣ"<<endl;

	/********* ��Ŀ3 *********/
	//while(cin>>s1)
	//	s2 = s2 + s1;

	/********* ��Ŀ4 *********/
	while(cin>>s1)
	{
		if(s2.empty()) //����ǵ�һ�����ʣ�ǰ�治�üӿո�
			s2 = s1;
		else
			s2 = s2 +' '+ s1;
	}

	cout<<"���õ������Ӻ���ַ�����"<<endl<<s2<<endl;


	return 0;
}