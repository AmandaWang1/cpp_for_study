#include <iostream>
#include <string>

using namespace std;

class Screen
{
public:
	typedef std::string::size_type index;
	Screen(int ht = 0, int wd = 0) :contents(ht*wd, ' '), cursor(0), height(ht), width(wd)
	{

	}
	double area() const
	{
		return height * width;
	}
	friend int calcArea(Screen&);  //定义成友元后这个函数可以操作私有的数据成员
	friend class Window_Mgr;
	friend class Dog;
private:
	std::string contents;
	int height, width;
	index cursor;
};

//这个函数不是类的成员函数
int calcArea(Screen & screen)
{
	return screen.height * screen.width;
}

class Window_Mgr   //窗口管理-对Screen进行管理
{
public:
	void relocate(int r, int c, Screen& s)
	{
		s.height += r;
		s.width += c;

	}
private:

};

class Dog
{
public:
	int foo(Screen& screen)
	{
		return screen.height*screen.width;
	}
	int koo(Screen& screen)
	{
		return screen.height*screen.width;
	}
private:

};

int main()
{
	Screen a(60,100);
	cout<<a.area()<<endl;

	Window_Mgr wm;
	wm.relocate(20,100,a);

	cout << calcArea(a) << endl;

	return 0;
}