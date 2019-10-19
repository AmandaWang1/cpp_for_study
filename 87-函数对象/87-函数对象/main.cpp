#include <iostream>
#include <vector>
#include <list>   //����
#include <algorithm>  //�㷨

using namespace std;

//class absInt
//{
//private:
//public:
//	int operator()  (int val)
//	{}
//
//};

struct absInt
{
	//���ز�����  ():�������ò�����
	int operator() (int val)
	{
		return val < 0 ? -val : val;    //���С��0 ȡ����������ȡԭ����ֵ
	}
};

//����һ����ͨ��ģ�庯��
template<typename elementType>
void FuncDisplayElement(const elementType & element)
{
	cout<<element<<' ';
}

//��ģ�������
template<typename elementType>
struct DisplayElement
{
	//���ӳ�Աȥ�洢״̬
	int m_nCount;
	DisplayElement()
	{
		m_nCount = 0;
	}

	void operator() (const elementType & element)    //�����˺������ò�����
	{
		++m_nCount;
		cout<<element<<' ';  //�Ѳ�����ʾ����
	}
};

int main()
{
	int i = -42;
	absInt absObj;
	unsigned int ui = absObj(i);
	cout<<ui<<endl<<endl;

	vector<int> a;
	for(int n = 0; n<10; ++n)
	{
		a.push_back(n);
	}

	//����
	list<char> b;
	for(char c = 'a'; c<'k'; ++c)
	{
		b.push_back(c);
	}

	//STL�㷨
	DisplayElement<int> mResult;
	mResult = for_each(a.begin(),a.end(),mResult);   //������㷨������������begin��������end�����������е�����
	cout<<endl;
	cout<<"������"<<mResult.m_nCount<<endl;

	//��������ִ�к��ܱ���״̬
	for_each(b.begin(), b.end(),DisplayElement<char>());
	cout<<endl;

	cout<<"Hello ��������"<<endl;

	return 0;
}