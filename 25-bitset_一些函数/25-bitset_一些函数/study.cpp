#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int i;
	cin>>i;
	bitset<16> a(i);
	cout<<"输入的数据转化为二进制数为"<<a<<endl;

	/****** 检测a中是否有1 ******/
	bool is_set = a.any();
	if(is_set)
		cout<<"a中至少存在一个1"<<endl;
	bool is_not_set = a.none();
	if(is_not_set)
		cout<<"a中一个1都没有"<<endl;

	/********** 统计a中1的个数 ********/
	size_t bits_set = a.count();
	cout<<"a中一共有"<<bits_set<<"个1"<<endl;

	cout<<"a的大小："<<a.size()<<endl;

	cout<<"a中0的个数为："<<a.size()-a.count()<<endl;

	return 0;
}