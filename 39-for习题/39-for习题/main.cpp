/*
	ϰ�⣺
	������int���͵�vector����������һЩ���ݷŵ������������
	�ж�һ��������������ǲ�����һ��������ǰ׺���磺��һ������ 009990
	�ڶ������ݣ�009990876767��
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a1,a2;
	int num1,num2;

	/* ���һ���������������� */
	cout<<"Enter some numbers for the first vector(ctrl+z to end):"<<endl;
	while(cin>>num1)
		a1.push_back(num1);

	cin.clear();//���cin���ݣ�Ϊ���������ʹ��ctrl+z

	/* ��ڶ����������������� */
	cout<<"Enter some numbers for the second vector(ctrl+z to end):"<<endl;
	while(cin>>num2)
		a2.push_back(num2);

	/* �������ȥ�Ƚ�������С�õ���� */
	vector<int>::size_type size1,size2;
	size1 = a1.size();
	size2 = a2.size();

	/* ѭ������Ԫ�أ��ж��Ƿ���������ȵ� */
	bool check = true;
	for( vector<int>::size_type i = 0; i < (size1>size2?size2:size1); ++i )
	{
		if(a1[i] != a2[i])
		{
			check = false;
			break;
		}
	}

	/* �������ȵ��ж�˭��˭��һ���� */
	if(check)
	{
		if(size2>size1)
			cout<<"The first is a part of the second"<<endl;
		else if(size2<size1)
			cout<<"The second is a part of the first"<<endl;
		else
			cout<<"They are equal!"<<endl;
	}
	else
	{
		cout<<"No one is the part of another one!"<<endl;
	}

	return 0;
}