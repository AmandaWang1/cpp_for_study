#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

int main()
{
	int const max_number = 100;
	int const max ((int)sqrt((double)max_number));
	bitset<max_number+1> number;  //101个0
	number.set();  //101个1

	number[1] = 0; //1不是素数

	for(int i(1);i<max;i++) //这里用平方根，因为任何非质数至少有一个因数不大于他的平方根
	{
		if(number[i])  //如果这个数是1，没有被划去
		{
			for(int j(i*i);j<max_number+1;j+=i)   //前面用i*i的原因是，如果*2已经被2划去，*3被3划去，*自己是未划去的//这里的j=j+i是为了取得倍数
				number[j]=0;
		}
	}

	//把数据遍历输出
	cout<<"0到"<<max_number<<"中总共有"<<number.count()<<"个素数"<<endl;
	cout<<"他们是："<<endl;
	for(int k = 1;k<max_number;k++)
	{
		if(number[k] == 1)
			cout<<k<<' ';
	}
	cout<<endl;
	return 0;
}