/*														    *
 *	习题一：												*
 *	读一组整数到vector变量，计算并输出没对相邻元素的和，	*
 *	如果输入个数为奇数，则提示用户最后一个元素没有对应的和，*
 *	并输出其值。											*
 *														   	*/

/*
	习题二：
	读一组整数到vector变量，让第一个和最后一个配对，
	第二个和倒数第二个配对，
	以此类推，将元素和输出					
														*/

#include <iostream>
#include <vector>

using namespace std;

#if 0
/*********** 题目一 *************/
int main()
{
	/* * * * * * * * 我写的* * * * * * * */
	/*vector<int> num;
	vector<int>::size_type j = 0;
	int i = 0;
	int n ;
	cout<<"输入的数为："<<endl;
	while(cin>>n)
	{
		i++;
		num.push_back(n);
		if(i == 2)
		{
			cout<<"输出的数为："<<num[j-1]+num[j];
			i = 0;
		}
		j++;
	}
	if(i==1)
		cout<<"输入的数为奇数"<<endl;*/
	/* * * * * * * * * * 老师写的 * * * * * * * * * * * * */

	vector<int> num;
	int n;

	while(cin>>n)			//向向量里输入数据
		num.push_back(n);

	if(num.empty())
	{
		cout<<"没有输入数据？！"<<endl;
		return -1;
	}

	cout<<"输入的数据两两之和为:"<<endl;
	for(vector<int>::size_type a = 0;a<num.size()-1;a=a+2)
	{
		cout<<num[a]+num[a+1]<<endl;
	}
	if(num.size()%2 != 0)
		cout<<"剩余最后一个数,最后一个数为："<<num[num.size()-1]<<endl;




	return 0;
}
#else if

/************** 第二题（仿照第一题老师的写的） *****************/
int main()
{
	vector<int> num;
	int n;
	int i = 0;

	cout<<"输入的数为："<<endl;
	while(cin>>n)
		num.push_back(n);

	if(num.empty())
	{
		cout<<"没有输入数据？！"<<endl;
		return -1;
	}

/*（我的）	cout<<"输出的数为："<<endl;
		for(vector<int>::size_type a = 0;a<num.size()/2;a++)
			cout<<num[a]+num[num.size()-1-a]<<endl;

	if(num.size()%2 != 0)
	{
		cout<<"剩余最后一个数,最后一个数为："<<num[(num.size()/2)+1]<<endl;
	}*/

	//（老师的）
	cout<<"输出的数为："<<endl;
	vector<int>::size_type first,last;
	for(first = 0,last = num.size()-1 ; first<last ; first++,last--)
		cout<<num[first]+num[last]<<endl;

	if(first == last)
		cout<<"中间的数为："<<num[first]<<endl;

	return 0;
}


#endif