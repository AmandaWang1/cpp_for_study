#include <iostream>
#include <cstring>
#include "string.h"

String::String(char const *chars)
{
	chars = chars ? chars : "";
	ptrChars = new char[std::strlen(chars)+1];
	std::strcpy(ptrChars,chars);
}

String::String(String const &str)
{
	ptrChars = new char[std::strlen(str.ptrChars)+1];
	std::strcpy(ptrChars,str.ptrChars);
}

//析构函数，删除前面new出来的动态数组
String::~String()
{
	delete[] ptrChars;
}

//把字符串里的字符显示出来
void String::display() const
{
	std::cout<<ptrChars<<std::endl;
}