#include <iostream>
#include <cassert>

using namespace std;

void bank(int number)
{
	int money = 0;
	if(number<0)
	{
		cout<<"��������Ϊ����!!!!"<<endl;
		cout<<"�ļ���"<<__FILE__<<endl;
		cout<<"�У�"<<__LINE__<<endl;
		cout<<"ʱ�䣺"<<__TIME__<<endl;
		cout<<"���ڣ�"<<__DATE__<<endl;
	}
	money-=number;
}

int add(int x,int y)
{
	return x*y;
}

int main()
{
#ifndef NDEBUG
	cerr<<"Start main..."<<endl;
#endif

	bank(-100);

	int result;
	result=add(1,2);
	assert(result == 3); //�ܸ���ѡ�����

#ifndef NDEBUG
	cerr<<"End!!!"<<endl;
#endif

	return 0;
}