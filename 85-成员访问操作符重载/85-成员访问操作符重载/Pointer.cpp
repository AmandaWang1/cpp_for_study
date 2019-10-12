//智能指针
#include "pointer.h"
#include "string.h"

//初始化智能指针的值为0
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

String Pointer::errorMessage("未初始化的指针");

String &Pointer::operator*()
{
	if(!ptr) //如果指针是无效的，抛出异常
		throw errorMessage;
	return *ptr;
}

String *Pointer::operator->() const
{
	if(!ptr) //如果指针是无效的，抛出异常
		throw errorMessage;
	return ptr;
}
