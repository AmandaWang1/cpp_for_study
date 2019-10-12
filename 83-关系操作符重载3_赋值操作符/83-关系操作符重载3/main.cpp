#include <iostream>

using namespace std;

class String
{
public:
	String(char const *chars = "");
	//赋值操作符重载
	String &operator=(String const &);
	//String &operator=(char const *); //参数不一样，可以直接用字符串赋值
	//String &operator=(char); //用一个字符去赋值给字符串

	void print();

private:
	char *ptrChars;
};

void String::print()
{
	cout<<ptrChars<<endl;
}

//赋值操作符重载
String &String::operator=(String const &str)
{
	if(strlen(ptrChars) != strlen(str.ptrChars))  //如果不相等
	{
		char *ptrHold = new char[strlen(str.ptrChars) + 1];      //创建一个新的字符数组
		delete[] ptrChars;
		ptrChars = ptrHold;
	}
	std::strcpy(ptrChars,str.ptrChars);  //复制
	return *this;
}

String::String(char const *chars)
{
	ptrChars = new char[std::strlen(chars)+1];
	std::strcpy(ptrChars,chars);
}

int main()
{
	String s("hello");
	String s2("Dog");
	s.print();
	s2.print();

	s = s2; //赋值操作

	return 0;
}