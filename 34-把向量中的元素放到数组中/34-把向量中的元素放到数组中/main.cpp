#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a;
	int b;
	cout<<"Enter numbers(ctrl+z to end):"<<endl;
	while(cin>>b)   //从键盘中读入一些值，把这些值放到向量里
		a.push_back(b);

	int *p = new int[a.size()];

	/* 用迭代器读取向量中的元素并放到数组中 */
	int i = 0;
	for(vector<int>::iterator it = a.begin();it!=a.end();it++,i++)
		p[i] = *it;

	/* 把数组中的元素输出 */
	for(int w = 0;w!=a.size();w++)
		cout<<p[w]<<' ';

	cout<<endl;

	delete[]p; //释放数组，防止产生内存泄漏

	return 0;
}