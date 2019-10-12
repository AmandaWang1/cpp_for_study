#ifndef _POINTER_H
#define _POINTER_H

class String;

//智能指针：对指针使用进行计数

class Pointer
{
private:
	String *ptr;
	static String errorMessage;
public:
	Pointer();
	Pointer(String const &n);
	~Pointer();

	//重载成员访问操作符
	String &operator*();
	String *operator->() const;
};

#endif /*_POINTER_H*/