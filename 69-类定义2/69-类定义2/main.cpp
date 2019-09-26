#include <iostream>
#include <string>

using namespace std;

class Screen
{
public:

	typedef std::string::size_type  index;
	//														����λ������Ϊ0
	Screen(index ht = 0, index wd = 0) : contents(ht * wd, 'A'), cursor(0), height(ht), width(wd)
	{
	}

	//								����
	Screen(index ht, index wd, const std::string &conts);

	char get() const
	{
		return contents[cursor];   //���ع��λ��
	}

	char get(index r, index c)  //һ���������У�һ����������
	{
		index row;
		row = r * width;
		return contents[row + c];
	}

private:
	std::string contents;   //�ı����е�����
	index cursor;    //���λ��
	index height, width;  //�ı���߶ȿ��

};

Screen::Screen (index ht,index wd,const std::string &conts):contents (conts),cursor(0),height(ht),width(wd)
{

}

int main()
{
	Screen a(10,100);
	cout << a.get() << endl;  //��ǰ���λ�õ��ַ�
	cout << a.get(2,8) << endl;  //�ڶ��еڰ���

	Screen b(6,16,"hello screen class");
	cout << b.get() << endl;
	cout << b.get(0,4) << endl;

	cout << "����һ��" << endl;

	return 0;
}