#include <iostream>
#include <vector>

using namespace std;

class account
{
};

class phone
{
};

class name
{
};

class record
{
public:
	account a;
	phone b;
	name c;
};

void lookup(const account& acct)
{
	cout<<"ʹ���˺Ž��в���"<<endl;
}

void lookup(const phone& ph)
{
	cout<<"ʹ�õ绰������в���"<<endl;
}

void lookup(const name& na)
{
	cout<<"ʹ���������в���"<<endl;
}

void show(int x)
{
	cout<<x<<endl;
}

void show(vector<int> &y)
{
	for(vector<int>::iterator iter = y.begin();
		iter != y.end();++iter)
		cout<<*iter<<endl;
}

int main()
{
	account x;
	phone y;
	name z;
	lookup(x);
	lookup(y);
	lookup(z);

	cout<<endl;

	int a = 89;
	vector<int> b;
	b.push_back(1);
	b.push_back(2);
	b.push_back(3);

	show(a);
	show(b);

	cout<<endl;

	return 0;
}