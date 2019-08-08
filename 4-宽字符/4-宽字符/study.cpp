/*
	注意头文件
 */

#include<iostream>
#include <cwchar>
#include <clocale>
#include <cstdlib>

int main()
{
	wchar_t  a = L'中';
	setlocale(LC_ALL,"chs");//使用非英文前要先设置本地属性
	wprintf(L"%lc\n",a);    

	return 0;
}