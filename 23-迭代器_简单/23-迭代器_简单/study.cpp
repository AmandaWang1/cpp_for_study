#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(10,8);

	vector<int> :: iterator w = v.begin();
	while(w!=v.end()) //��ÿһ�������֮ǰ�Ķ���
	{
		*w = *w * 2;
		w++;
	}

	vector<int> :: iterator a = v.begin();

	*a = 9; //�ѵ�һ�����ĳ�9
	a++;
	*a = 10; //�ѵڶ������ĳ�10
	a = a+4;
	*a = 11; //�ѵ��������ĳ�11
	vector<int> :: iterator  mid = v.begin() + v.size()/2;
	*mid = 100; // ���м������Ϊ100


	cout<<"������"<<endl;
	for( vector<int>::iterator b = v.begin();b!=v.end();b++)
		cout<<*b<<' ';



	return 0;
}