#include <iostream>
#include <string>

using namespace std;

class Screen
{
public:

	typedef std::string::size_type  index;
	//														光标的位置设置为0
	Screen(index ht = 0, index wd = 0) : contents(ht * wd, 'A'), cursor(0), height(ht), width(wd)
	{
	}

	//								内容
	Screen(index ht, index wd, const std::string &conts);

	char get() const
	{
		return contents[cursor];   //返回光标位置
	}

	char get(index r, index c)  //一个参数是行，一个参数是列
	{
		index row;
		row = r * width;
		return contents[row + c];
	}

private:
	std::string contents;   //文本框中的文字
	index cursor;    //光标位置
	index height, width;  //文本框高度宽度

};

Screen::Screen (index ht,index wd,const std::string &conts):contents (conts),cursor(0),height(ht),width(wd)
{

}

int main()
{
	Screen a(10,100);
	cout << a.get() << endl;  //当前光标位置的字符
	cout << a.get(2,8) << endl;  //第二行第八列

	Screen b(6,16,"hello screen class");
	cout << b.get() << endl;
	cout << b.get(0,4) << endl;

	cout << "测试一下" << endl;

	return 0;
}