#include <iostream>

using namespace std;

class CDemo
{
public:
	CDemo(int pa,char *cstr)
	{
		this->a = pa;
		this->str = new char[1024];
		strcpy(this->str, cstr);
	}

	//我没写，C++会自动帮我写一个复制构造函数

	CDemo (CDemo& obj)
	{
		this->a = obj.a;
		//this->str = obj.str;  //这里不对，要深复制才行

		//下面这几行就是深复制
		this ->str = new char[1024];
		if(str!=0)
		{
			strcpy(this->str,obj.str);
		}
	}

	~CDemo()
	{
		delete str;
	}

	//这里为了使用方便，把数据类型设置成了公有的
	int a;
	char *str;

};

int main()
{
	CDemo A(10,"hello");
	CDemo B = A;
	cout << A.a << "," << A.str << endl;
	cout << B.a << "," << B.str << endl;
	return 0;
}