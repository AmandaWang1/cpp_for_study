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

	//��ûд��C++���Զ�����дһ�����ƹ��캯��

	CDemo (CDemo& obj)
	{
		this->a = obj.a;
		//this->str = obj.str;  //���ﲻ�ԣ�Ҫ��Ʋ���

		//�����⼸�о������
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

	//����Ϊ��ʹ�÷��㣬�������������ó��˹��е�
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