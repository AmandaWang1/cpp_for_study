#include "sales_item.h"

//��������涨�庯��
double sales_item::ave_price()  const
{
	if(this->units_sold)
		return (this->revenue / this->units_sold);        //����������������ݳ�Ա
	else
		return 0;
}