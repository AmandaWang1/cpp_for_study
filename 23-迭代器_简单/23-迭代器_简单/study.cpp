#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(10,8);

	vector<int> :: iterator w = v.begin();
	while(w!=v.end()) //把每一个数变成之前的二倍
	{
		*w = *w * 2;
		w++;
	}

	vector<int> :: iterator a = v.begin();

	*a = 9; //把第一个数改成9
	a++;
	*a = 10; //把第二个数改成10
	a = a+4;
	*a = 11; //把第六个数改成11
	vector<int> :: iterator  mid = v.begin() + v.size()/2;
	*mid = 100; // 把中间的数变为100


	cout<<"迭代器"<<endl;
	for( vector<int>::iterator b = v.begin();b!=v.end();b++)
		cout<<*b<<' ';



	return 0;
}