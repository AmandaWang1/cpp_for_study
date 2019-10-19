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
	String &operator++(); //ǰ++����������
	String &operator--(); //ǰ--����������
	String const operator++(int); //��++
	String const operator--(int); //��--

};

//ǰ++
String &String::operator++()
{
	for(std::size_t i = 0;i<std::strlen(ptrChars); ++i)
	{
		++ptrChars[i];
	}
	return *this;
}

//ǰ--
String &String::operator--()
{
	for(std::size_t i = 0;i<std::strlen(ptrChars); ++i)
	{
		--ptrChars[i];
	}
	return *this;
}

//��++
String const String::operator++(int)
{
	String copy(*this);  //��ԭ�����ַ�������
	++(*this);  //����ȥ����ǰ++
	return copy;
}

//��--
String const String::operator--(int)
{
	String copy(*this);  //��ԭ�����ַ�������
	--(*this);  //����ȥ����ǰ--
	return copy;
}

void String::display() 
{
	cout<<ptrChars<<endl;
}

String::String(char const *chars)
{
	chars = chars ? chars : "";       //�ж��ǲ��ǿ�ָ��
	ptrChars = new char[std::strlen(chars) + 1];  //��new��������̬�Ĵ���һ������
	std::strcpy(ptrChars, chars);			//�ѹ��캯���������ݹ������ַ������Ƶ�����ڲ�
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

	cout<<"++����"<<endl;

	String str1("ABC");
	str1.display();

	String str2(++str1);
	String str3(str1++);
	//str1.display();
	str2.display();
	str3.display();

	cout<<endl;
	cout<<"-- ����"<<endl;

	String str4("BCD");
	str4.display();
	String str5(--str4);
	String str6(str4--);
	/*str4.display();*/
	str5.display();
	str6.display();

	return 0;
}