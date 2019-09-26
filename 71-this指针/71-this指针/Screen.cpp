#include "Screen.h"

Screen& Screen::move(index r, index c)
{
	index row = r * width;
	cursor = row + c;
	return *this;    // *解除引用，this指向一个对象
}
void Screen::set(index r, index c, char ch)
{
	index row = r * width;
	contents[row + c] = ch;

}
void Screen::set(char ch)
{
	contents[cursor] = ch;
}

