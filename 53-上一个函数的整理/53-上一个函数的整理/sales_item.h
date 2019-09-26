#ifndef _SALES_ITEM_H
#define _SALES_ITEM_H

#include <string>

class sales_item    //������Ŀ   //classҪ��ɶ������ʹ��
{
public:

	double ave_price()   const;//��������ԭ��

	//��ĳ�Ա�����������ж��������ǲ���ͬһ����
	bool same_isbn(const sales_item &rhs) const  //��ʾ������������������κ��޸�
	{
		return this->isbn == rhs.isbn;
	}

public:
	std::string isbn;   //���
	unsigned units_sold;  //����
	double revenue;  //��Ǯ��
};

#endif