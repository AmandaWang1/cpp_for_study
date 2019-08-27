#include <iostream>

using namespace std;

//			  p指向数组的第一个元素
void arry(const int *p ,const size_t size)  //加上const是因为没有修改数组里的数
{
	for(size_t i = 0;i<size;i++)
		cout<<p[i]<<' ';
	cout<<endl;
}

//   相当于int *a,[]里的数字可写可不写
void arry2(int a[] ,size_t size)
{
	for(size_t i = 0;i<size;i++)
		cout<<a[i]<<' ';
	cout<<endl;
}

void arry3(int (&x)[5]) //[]里的数必须和数组中的元素对应
{
	for(size_t i = 0;i<5;i++)
		cout<<x[i]<<' ';
	cout<<endl;
}

//二维数组
// x是一个指针，指向一个有很多行的数组的第一行，每一行是5个数
//									一共有rowSize行
void arry4(int (*x)[5],int rowSize)
{
	for(int i = 0; i < rowSize; i++)
	{
		for(int j = 0; j<5; j++)
		{
			cout<<x[i][j]<<' ';
		}
		cout<<endl;
	}
}

//  传字符数组（C风格字符串），最后一个字符是null
//  x是指针，指向第一个字符
void arry5(const char *x)
{
	while(*x != NULL)
		cout<<*x++;
	cout<<endl;
}

//第一个参数是指向数组元素的指针，第二个指向数组最后一个元素的下一个
//C++标准库的写法
void arry5(const int *begin,const int *end)
{
	while(begin != end)
		cout << *begin++ <<' ';
	cout<<endl;
}

int main()
{
	int a[] = {1,2,3,4,5};
	arry(a,5);
	arry2(a,5);
	arry3(a);
	arry5(a,a+5);

	cout<<endl;

	int b[][5] = {
		{1,2,3,4,5},
		{2,3,4,5,1},
		{3,4,5,1,2}
	};
	arry4(b,3);

	cout<<endl;

	char s[] = "hello C++";
	arry5(s);

	return 0;
}