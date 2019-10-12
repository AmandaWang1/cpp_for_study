#ifndef _POINTER_H
#define _POINTER_H

class String;

//����ָ�룺��ָ��ʹ�ý��м���

class Pointer
{
private:
	String *ptr;
	static String errorMessage;
public:
	Pointer();
	Pointer(String const &n);
	~Pointer();

	//���س�Ա���ʲ�����
	String &operator*();
	String *operator->() const;
};

#endif /*_POINTER_H*/