#ifndef _SCREEN_H
#define _SCREEN_H

#include <string>

class Screen
{
public:
	typedef std::string::size_type index;
	Screen(index ht = 0, index wd = 0) :contents(ht*wd, 'A'), cursor(0), height(ht), width(wd), access_ctr(0)
	{
	}
	//���ص�ǰ���λ��
	char get() const
	{
		return contents[cursor];
	}
	//ָ���ĵڼ��еڼ���,�������λ�����ڵ��ַ�
	char get(index r, index c) const
	{
		index row = r * width;
		return contents[row + c];
	}
	//�ƶ���ǰ����λ�õ��ڼ��еڼ���
	Screen& move(index r, index c);
	//�ı�ָ��λ�õ��ַ�
	void set(index r, index c, char ch);
	//�ı䵱ǰ���λ�õ��ַ�
	void set(char ch);
	void display(std::ostream &os)
	{
		++access_ctr;
		do_display(os);
	}
private:

	std::string contents;	//�����������
	index cursor;    //����λ��
	index height, width;
	mutable size_t access_ctr;  //����������

	void do_display(std::ostream &os) const
	{
		os << contents;
	}
};

#endif // !_SCREEN_H
