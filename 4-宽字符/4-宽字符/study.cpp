/*
	ע��ͷ�ļ�
 */

#include<iostream>
#include <cwchar>
#include <clocale>
#include <cstdlib>

int main()
{
	wchar_t  a = L'��';
	setlocale(LC_ALL,"chs");//ʹ�÷�Ӣ��ǰҪ�����ñ�������
	wprintf(L"%lc\n",a);    

	return 0;
}