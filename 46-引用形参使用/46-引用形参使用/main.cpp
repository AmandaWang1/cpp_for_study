#include <iostream>

using namespace std;

void count ( int a,int b, int &�ӷ����,int &�������,int &�˷����,int &�������)
{
	�ӷ���� = a+b;
	������� = a-b;
	�˷���� = a*b;
	������� = a/b;
}

int main()
{
	int a,b;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	int �ӷ����,�������,�˷����,�������;
	count(a,b,�ӷ����,�������,�˷����,�������);
	cout<<"�ӷ����:"<<�ӷ����<<endl;
	cout<<"�������:"<<�������<<endl;
	cout<<"�˷����:"<<�˷����<<endl;
	cout<<"�������:"<<�������<<endl;

	return 0;
}