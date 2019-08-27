#include <iostream>

using namespace std;

//			  pָ������ĵ�һ��Ԫ��
void arry(const int *p ,const size_t size)  //����const����Ϊû���޸����������
{
	for(size_t i = 0;i<size;i++)
		cout<<p[i]<<' ';
	cout<<endl;
}

//   �൱��int *a,[]������ֿ�д�ɲ�д
void arry2(int a[] ,size_t size)
{
	for(size_t i = 0;i<size;i++)
		cout<<a[i]<<' ';
	cout<<endl;
}

void arry3(int (&x)[5]) //[]���������������е�Ԫ�ض�Ӧ
{
	for(size_t i = 0;i<5;i++)
		cout<<x[i]<<' ';
	cout<<endl;
}

//��ά����
// x��һ��ָ�룬ָ��һ���кܶ��е�����ĵ�һ�У�ÿһ����5����
//									һ����rowSize��
void arry4(int (*x)[5],int rowSize)
{
	for(int i = 0; i < rowSize; i++)
	{
		for(int j = 0; j<5; j++)
		{
			cout<<x[i][j]<<' ';
		}
		cout<<endl;
	}
}

//  ���ַ����飨C����ַ����������һ���ַ���null
//  x��ָ�룬ָ���һ���ַ�
void arry5(const char *x)
{
	while(*x != NULL)
		cout<<*x++;
	cout<<endl;
}

//��һ��������ָ������Ԫ�ص�ָ�룬�ڶ���ָ���������һ��Ԫ�ص���һ��
//C++��׼���д��
void arry5(const int *begin,const int *end)
{
	while(begin != end)
		cout << *begin++ <<' ';
	cout<<endl;
}

int main()
{
	int a[] = {1,2,3,4,5};
	arry(a,5);
	arry2(a,5);
	arry3(a);
	arry5(a,a+5);

	cout<<endl;

	int b[][5] = {
		{1,2,3,4,5},
		{2,3,4,5,1},
		{3,4,5,1,2}
	};
	arry4(b,3);

	cout<<endl;

	char s[] = "hello C++";
	arry5(s);

	return 0;
}