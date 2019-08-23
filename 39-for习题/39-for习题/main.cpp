/*
	习题：
	用两个int类型的vector向量，输入一些数据放到这两个向量里，
	判断一个向量里的数据是不是另一个向量的前缀（如：第一个数据 009990
	第二个数据：009990876767）
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a1,a2;
	int num1,num2;

	/* 向第一个向量里输入数据 */
	cout<<"Enter some numbers for the first vector(ctrl+z to end):"<<endl;
	while(cin>>num1)
		a1.push_back(num1);

	cin.clear();//清除cin数据，为了下面可以使用ctrl+z

	/* 向第二个向量里输入数据 */
	cout<<"Enter some numbers for the second vector(ctrl+z to end):"<<endl;
	while(cin>>num2)
		a2.push_back(num2);

	/* 定义变量去比较向量大小得到最大 */
	vector<int>::size_type size1,size2;
	size1 = a1.size();
	size2 = a2.size();

	/* 循环向量元素，判断是否有数据相等的 */
	bool check = true;
	for( vector<int>::size_type i = 0; i < (size1>size2?size2:size1); ++i )
	{
		if(a1[i] != a2[i])
		{
			check = false;
			break;
		}
	}

	/* 如果有相等的判断谁是谁的一部分 */
	if(check)
	{
		if(size2>size1)
			cout<<"The first is a part of the second"<<endl;
		else if(size2<size1)
			cout<<"The second is a part of the first"<<endl;
		else
			cout<<"They are equal!"<<endl;
	}
	else
	{
		cout<<"No one is the part of another one!"<<endl;
	}

	return 0;
}