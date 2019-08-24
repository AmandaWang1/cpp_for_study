#include <iostream>
#include <cassert>

using namespace std;

void bank(int number)
{
	int money = 0;
	if(number<0)
	{
		cout<<"数量不能为负数!!!!"<<endl;
		cout<<"文件："<<__FILE__<<endl;
		cout<<"行："<<__LINE__<<endl;
		cout<<"时间："<<__TIME__<<endl;
		cout<<"日期："<<__DATE__<<endl;
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
	assert(result == 3); //受附加选项控制

#ifndef NDEBUG
	cerr<<"End!!!"<<endl;
#endif

	return 0;
}