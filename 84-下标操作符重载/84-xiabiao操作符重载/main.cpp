#include <iostream>

using namespace std;

class String
{
private:
	char *ptrChars;
	static String errorMessage;
public:
	String(char const *chars = "");  //�Դ����ı������г�ʼ��

	char &operator[](std::size_t index) throw(String); 
	char operator[](std::size_t index ) const throw(String);

	void print();
};

void String::print()
{
	cout<<ptrChars<<endl;
}

//��errorMessage��ʼ������������������Ϣ
String String::errorMessage("�±�Խ��");

//�����±���������أ��ɱ��Ա������
char &String::operator[](std::size_t index) throw(String)
{
	if(index >= std::strlen(ptrChars))  //���д����±����
	{
		throw errorMessage;	   //�׳��쳣
	}
	return ptrChars[index];
}

//�±���������أ�������Ա������(����������������һģһ��)
char String::operator[](std::size_t index) const throw(String)
{
	if(index >= std::strlen(ptrChars))  //���д����±����
	{
		throw errorMessage;	   //�׳��쳣
	}
	return ptrChars[index];

}

String::String(char const *chars)
{
	chars = chars ? chars : "";        //�����һ����ָ�룬�ͱ���ַ���
	ptrChars = new char[std::strlen(chars) + 1];
	std::strcpy(ptrChars,chars);  //����
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