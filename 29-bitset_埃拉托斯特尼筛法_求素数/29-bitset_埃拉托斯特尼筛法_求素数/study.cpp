#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

int main()
{
	int const max_number = 100;
	int const max ((int)sqrt((double)max_number));
	bitset<max_number+1> number;  //101��0
	number.set();  //101��1

	number[1] = 0; //1��������

	for(int i(1);i<max;i++) //������ƽ��������Ϊ�κη�����������һ����������������ƽ����
	{
		if(number[i])  //����������1��û�б���ȥ
		{
			for(int j(i*i);j<max_number+1;j+=i)   //ǰ����i*i��ԭ���ǣ����*2�Ѿ���2��ȥ��*3��3��ȥ��*�Լ���δ��ȥ��//�����j=j+i��Ϊ��ȡ�ñ���
				number[j]=0;
		}
	}

	//�����ݱ������
	cout<<"0��"<<max_number<<"���ܹ���"<<number.count()<<"������"<<endl;
	cout<<"�����ǣ�"<<endl;
	for(int k = 1;k<max_number;k++)
	{
		if(number[k] == 1)
			cout<<k<<' ';
	}
	cout<<endl;
	return 0;
}