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
	//返回当前光标位置
	char get() const
	{
		return contents[cursor];
	}
	//指定的第几行第几列,返回这个位置所在的字符
	char get(index r, index c) const
	{
		index row = r * width;
		return contents[row + c];
	}
	//移动当前光标的位置到第几行第几列
	Screen& move(index r, index c);
	//改变指定位置的字符
	void set(index r, index c, char ch);
	//改变当前光标位置的字符
	void set(char ch);
	void display(std::ostream &os)
	{
		++access_ctr;
		do_display(os);
	}
private:

	std::string contents;	//窗口里的内容
	index cursor;    //光标的位置
	index height, width;
	mutable size_t access_ctr;  //计数器变量

	void do_display(std::ostream &os) const
	{
		os << contents;
	}
};

#endif // !_SCREEN_H
