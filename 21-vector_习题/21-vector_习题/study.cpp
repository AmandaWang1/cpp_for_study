/*														    *
 *	ϰ��һ��												*
 *	��һ��������vector���������㲢���û������Ԫ�صĺͣ�	*
 *	����������Ϊ����������ʾ�û����һ��Ԫ��û�ж�Ӧ�ĺͣ�*
 *	�������ֵ��											*
 *														   	*/

/*
	ϰ�����
	��һ��������vector�������õ�һ�������һ����ԣ�
	�ڶ����͵����ڶ�����ԣ�
	�Դ����ƣ���Ԫ�غ����					
														*/

#include <iostream>
#include <vector>

using namespace std;

#if 0
/*********** ��Ŀһ *************/
int main()
{
	/* * * * * * * * ��д��* * * * * * * */
	/*vector<int> num;
	vector<int>::size_type j = 0;
	int i = 0;
	int n ;
	cout<<"�������Ϊ��"<<endl;
	while(cin>>n)
	{
		i++;
		num.push_back(n);
		if(i == 2)
		{
			cout<<"�������Ϊ��"<<num[j-1]+num[j];
			i = 0;
		}
		j++;
	}
	if(i==1)
		cout<<"�������Ϊ����"<<endl;*/
	/* * * * * * * * * * ��ʦд�� * * * * * * * * * * * * */

	vector<int> num;
	int n;

	while(cin>>n)			//����������������
		num.push_back(n);

	if(num.empty())
	{
		cout<<"û���������ݣ���"<<endl;
		return -1;
	}

	cout<<"�������������֮��Ϊ:"<<endl;
	for(vector<int>::size_type a = 0;a<num.size()-1;a=a+2)
	{
		cout<<num[a]+num[a+1]<<endl;
	}
	if(num.size()%2 != 0)
		cout<<"ʣ�����һ����,���һ����Ϊ��"<<num[num.size()-1]<<endl;




	return 0;
}
#else if

/************** �ڶ��⣨���յ�һ����ʦ��д�ģ� *****************/
int main()
{
	vector<int> num;
	int n;
	int i = 0;

	cout<<"�������Ϊ��"<<endl;
	while(cin>>n)
		num.push_back(n);

	if(num.empty())
	{
		cout<<"û���������ݣ���"<<endl;
		return -1;
	}

/*���ҵģ�	cout<<"�������Ϊ��"<<endl;
		for(vector<int>::size_type a = 0;a<num.size()/2;a++)
			cout<<num[a]+num[num.size()-1-a]<<endl;

	if(num.size()%2 != 0)
	{
		cout<<"ʣ�����һ����,���һ����Ϊ��"<<num[(num.size()/2)+1]<<endl;
	}*/

	//����ʦ�ģ�
	cout<<"�������Ϊ��"<<endl;
	vector<int>::size_type first,last;
	for(first = 0,last = num.size()-1 ; first<last ; first++,last--)
		cout<<num[first]+num[last]<<endl;

	if(first == last)
		cout<<"�м����Ϊ��"<<num[first]<<endl;

	return 0;
}


#endif