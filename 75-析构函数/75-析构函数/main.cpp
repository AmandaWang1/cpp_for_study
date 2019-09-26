#include <iostream>
#include <string>

using namespace std;

class NoName
{
public:
	NoName() :pstring(new std::string), i(0), d(0)
	{
		//打开文件
		//连接数据库
		//动态分配内存
		cout << "构造函数被调用了！\n" << endl;
	}
	NoName(const NoName & other);

	~NoName();

	NoName& operator=(const NoName &rhs);
private:
	std::string *pstring;
	int i;
	double d;
};

NoName& NoName::operator = (const NoName &rhs)
{
	pstring = new std::string;
	*pstring = *(rhs.pstring);
	i = rhs.i;
	d = rhs.d;
	return *this;
}

NoName::NoName(const NoName & other)
{
	pstring = new std::string;
	*pstring = *(other.pstring);
	i = other.i;
	d = other.d;
}

NoName::~NoName()
{
	//关闭文件
	//关闭数据库连接
	//回首动态分配的内存
	cout << "析构函数被调用了！\n" << endl;
	delete pstring;
}
int main()
{
	NoName a;

	NoName *p = new NoName;
	delete p;

	return 0;
}