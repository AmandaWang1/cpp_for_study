#include <iostream>

using namespace std;

class String
{
private:
	char *ptrChars;
public:
	String (char const *chars = "");
	String (String const &str);
	~String();
	void display();
	String &operator++(); //前++操作符重载
	String &operator--(); //前--操作符重载
	String const operator++(int); //后++
	String const operator--(int); //后--

};

//前++
String &String::operator++()
{
	for(std::size_t i = 0;i<std::strlen(ptrChars); ++i)
	{
		++ptrChars[i];
	}
	return *this;
}

//前--
String &String::operator--()
{
	for(std::size_t i = 0;i<std::strlen(ptrChars); ++i)
	{
		--ptrChars[i];
	}
	return *this;
}

//后++
String const String::operator++(int)
{
	String copy(*this);  //把原来的字符串复制
	++(*this);  //反过去调用前++
	return copy;
}

//后--
String const String::operator--(int)
{
	String copy(*this);  //把原来的字符串复制
	--(*this);  //反过去调用前--
	return copy;
}

void String::display() 
{
	cout<<ptrChars<<endl;
}

String::String(char const *chars)
{
	chars = chars ? chars : "";       //判断是不是空指针
	ptrChars = new char[std::strlen(chars) + 1];  //用new操作符动态的创建一个数组
	std::strcpy(ptrChars, chars);			//把构造函数参数传递过来的字符串复制到类的内部
}

String::String(String const &str)
{
	ptrChars = new char[std::strlen(str.ptrChars) + 1];
	std::strcpy(ptrChars, str.ptrChars);
}

String::~String()
{
	delete[] ptrChars;
}

int main()
{
	/*String s("ABC");
	s.display();

	++s;
	s.display();

	s++;
	s.display();

	cout<<endl;*/

	cout<<"++操作"<<endl;

	String str1("ABC");
	str1.display();

	String str2(++str1);
	String str3(str1++);
	//str1.display();
	str2.display();
	str3.display();

	cout<<endl;
	cout<<"-- 操作"<<endl;

	String str4("BCD");
	str4.display();
	String str5(--str4);
	String str6(str4--);
	/*str4.display();*/
	str5.display();
	str6.display();

	return 0;
}