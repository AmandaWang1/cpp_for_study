#include <iostream>

using namespace std;

class String
{
private:
	char *ptrChars;
	static String errorMessage;
public:
	String(char const *chars = "");  //对创建的变量进行初始化

	char &operator[](std::size_t index) throw(String); 
	char operator[](std::size_t index ) const throw(String);

	void print();
};

void String::print()
{
	cout<<ptrChars<<endl;
}

//对errorMessage初始化，用它来做错误信息
String String::errorMessage("下标越界");

//定义下标操作符重载（可变成员函数）
char &String::operator[](std::size_t index) throw(String)
{
	if(index >= std::strlen(ptrChars))  //如果写入的下标过大
	{
		throw errorMessage;	   //抛出异常
	}
	return ptrChars[index];
}

//下标操作符重载（常量成员函数）(两个函数里面内容一模一样)
char String::operator[](std::size_t index) const throw(String)
{
	if(index >= std::strlen(ptrChars))  //如果写入的下标过大
	{
		throw errorMessage;	   //抛出异常
	}
	return ptrChars[index];

}

String::String(char const *chars)
{
	chars = chars ? chars : "";        //如果是一个空指针，就变成字符串
	ptrChars = new char[std::strlen(chars) + 1];
	std::strcpy(ptrChars,chars);  //复制
}

int main()
{
	String s("hello");
	cout<<s[0]<<endl;

	s[0] = 'A';
	s.print();

	String const s2("dog");  
	cout<<s2[2]<<endl;

	return 0;
}