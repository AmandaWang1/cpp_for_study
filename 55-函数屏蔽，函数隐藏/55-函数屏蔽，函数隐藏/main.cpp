#include <iostream>
#include <string>

using namespace std;

string init()
{
	return "hello";
}

void fcn()
{
	//int init = 0;  //ע�⣺�������ͺ�������������ĺ����ͱ����أ����Σ���
	string s = init();
	cout<<s<<endl;
}

int main()
{
	fcn(); 
	return 0;
}