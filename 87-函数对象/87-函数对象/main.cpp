#include <iostream>
#include <vector>
#include <list>   //链表
#include <algorithm>  //算法

using namespace std;

//class absInt
//{
//private:
//public:
//	int operator()  (int val)
//	{}
//
//};

struct absInt
{
	//重载操作符  ():函数调用操作符
	int operator() (int val)
	{
		return val < 0 ? -val : val;    //如果小于0 取负数，否则取原来的值
	}
};

//定义一个普通的模板函数
template<typename elementType>
void FuncDisplayElement(const elementType & element)
{
	cout<<element<<' ';
}

//带模板的例子
template<typename elementType>
struct DisplayElement
{
	//增加成员去存储状态
	int m_nCount;
	DisplayElement()
	{
		m_nCount = 0;
	}

	void operator() (const elementType & element)    //重载了函数调用操作符
	{
		++m_nCount;
		cout<<element<<' ';  //把参数显示出来
	}
};

int main()
{
	int i = -42;
	absInt absObj;
	unsigned int ui = absObj(i);
	cout<<ui<<endl<<endl;

	vector<int> a;
	for(int n = 0; n<10; ++n)
	{
		a.push_back(n);
	}

	//链表
	list<char> b;
	for(char c = 'a'; c<'k'; ++c)
	{
		b.push_back(c);
	}

	//STL算法
	DisplayElement<int> mResult;
	mResult = for_each(a.begin(),a.end(),mResult);   //用这个算法来处理向量里begin迭代器和end迭代器里所有的数据
	cout<<endl;
	cout<<"数量："<<mResult.m_nCount<<endl;

	//函数对象，执行后还能保存状态
	for_each(b.begin(), b.end(),DisplayElement<char>());
	cout<<endl;

	cout<<"Hello 函数对象！"<<endl;

	return 0;
}