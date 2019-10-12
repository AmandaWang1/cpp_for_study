#include <iostream>

using namespace std;

class String
{
public:
	String(char const *chars = "");
	//��ֵ����������
	String &operator=(String const &);
	//String &operator=(char const *); //������һ��������ֱ�����ַ�����ֵ
	//String &operator=(char); //��һ���ַ�ȥ��ֵ���ַ���

	void print();

private:
	char *ptrChars;
};

void String::print()
{
	cout<<ptrChars<<endl;
}

//��ֵ����������
String &String::operator=(String const &str)
{
	if(strlen(ptrChars) != strlen(str.ptrChars))  //��������
	{
		char *ptrHold = new char[strlen(str.ptrChars) + 1];      //����һ���µ��ַ�����
		delete[] ptrChars;
		ptrChars = ptrHold;
	}
	std::strcpy(ptrChars,str.ptrChars);  //����
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

	s = s2; //��ֵ����

	return 0;
}