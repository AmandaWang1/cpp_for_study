#include <iostream>
#include <string>

using namespace std;

class NoName
{
public:
	NoName() :pstring(new std::string), i(0), d(0)
	{
		//���ļ�
		//�������ݿ�
		//��̬�����ڴ�
		cout << "���캯���������ˣ�\n" << endl;
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
	//�ر��ļ�
	//�ر����ݿ�����
	//���׶�̬������ڴ�
	cout << "���������������ˣ�\n" << endl;
	delete pstring;
}
int main()
{
	NoName a;

	NoName *p = new NoName;
	delete p;

	return 0;
}