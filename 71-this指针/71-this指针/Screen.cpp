#include "Screen.h"

Screen& Screen::move(index r, index c)
{
	index row = r * width;
	cursor = row + c;
	return *this;    // *������ã�thisָ��һ������
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

