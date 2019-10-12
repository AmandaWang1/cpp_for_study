//����ָ��
#include "pointer.h"
#include "string.h"

//��ʼ������ָ���ֵΪ0
Pointer::Pointer() :ptr(0)
{}

Pointer::Pointer(String const &n)
{
	ptr = new String(n);
}

Pointer::~Pointer()
{
	delete ptr;
}

String Pointer::errorMessage("δ��ʼ����ָ��");

String &Pointer::operator*()
{
	if(!ptr) //���ָ������Ч�ģ��׳��쳣
		throw errorMessage;
	return *ptr;
}

String *Pointer::operator->() const
{
	if(!ptr) //���ָ������Ч�ģ��׳��쳣
		throw errorMessage;
	return ptr;
}
