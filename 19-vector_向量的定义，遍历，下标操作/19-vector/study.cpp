#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> ivec;   //����int�������ݵ�һ��vector
	vector<double> dvec;
	vector<string> svec;

	/* ���� */
	vector<int> a;      //a��һ���յ�����
	vector<int> b(10,2);//b��һ��������������ʮ����
	vector<int> c(10);  //10��0
	vector<int> d(b);	//��b��ֵ����d
	vector<string> e(10,"hi");//10��hi
	vector<string> f(10);//10���մ�

	/* �������и�ֵ */
	a.push_back(1);  //���������зŶ���
	a.push_back(20);
	a.push_back(300);

	b.push_back(10);
	b.push_back(11);

	cout<<"a�Ĵ�СΪ��"<<a.size()<<endl;
	cout<<"b�Ĵ�СΪ��"<<b.size()<<endl;

	/* ����a�е�Ԫ�� */
	for(vector<int>::size_type i = 0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;

	/* ����b�е�Ԫ�� */
	for(vector<int>::size_type j = 0;j<b.size();j++)
		cout<<b[j]<<" ";
	cout<<endl;

	/* ͨ���±����ֱ�Ӹı�������ֵ */
	f[0] = "hello";
	for(vector<int>::size_type k = 0;k < f.size();k++)
		cout<<f[k]<<endl;

	return 0;
}