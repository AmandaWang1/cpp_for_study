#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a;
	int b;
	cout<<"Enter numbers(ctrl+z to end):"<<endl;
	while(cin>>b)   //�Ӽ����ж���һЩֵ������Щֵ�ŵ�������
		a.push_back(b);

	int *p = new int[a.size()];

	/* �õ�������ȡ�����е�Ԫ�ز��ŵ������� */
	int i = 0;
	for(vector<int>::iterator it = a.begin();it!=a.end();it++,i++)
		p[i] = *it;

	/* �������е�Ԫ����� */
	for(int w = 0;w!=a.size();w++)
		cout<<p[w]<<' ';

	cout<<endl;

	delete[]p; //�ͷ����飬��ֹ�����ڴ�й©

	return 0;
}