#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> ivec;   //保存int类型数据的一个vector
	vector<double> dvec;
	vector<string> svec;

	/* 定义 */
	vector<int> a;      //a是一个空的容器
	vector<int> b(10,2);//b是一个容器，里面有十个二
	vector<int> c(10);  //10个0
	vector<int> d(b);	//把b的值赋给d
	vector<string> e(10,"hi");//10个hi
	vector<string> f(10);//10个空串

	/* 向向量中赋值 */
	a.push_back(1);  //向“容器”中放东西
	a.push_back(20);
	a.push_back(300);

	b.push_back(10);
	b.push_back(11);

	cout<<"a的大小为："<<a.size()<<endl;
	cout<<"b的大小为："<<b.size()<<endl;

	/* 遍历a中的元素 */
	for(vector<int>::size_type i = 0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;

	/* 遍历b中的元素 */
	for(vector<int>::size_type j = 0;j<b.size();j++)
		cout<<b[j]<<" ";
	cout<<endl;

	/* 通过下标操作直接改变变量里的值 */
	f[0] = "hello";
	for(vector<int>::size_type k = 0;k < f.size();k++)
		cout<<f[k]<<endl;

	return 0;
}