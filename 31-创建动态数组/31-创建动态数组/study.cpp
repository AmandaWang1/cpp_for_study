#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"你想要个多大的数组："<<endl;
	cin>>n;

	/********** C语言的malloc 和free ************/
	int *p = (int *)malloc(n*sizeof(int));
	if(p!=NULL)
		cout<<"C语言创建动态数组成功"<<endl;
	free(p);  //释放数组

	/**************** C++的new 和delete ******************/
	int *pp = new int[n];
	if(pp!=NULL)
		cout<<"C++创建动态数组成功"<<endl;
	delete[] pp; //释放数组



	return 0;
}