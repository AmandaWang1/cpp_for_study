#include "Sales_item.h"

inline std::istream& operator>>(std::istream& in, Sales_item& s)
{
	double price;
	in >> s.isbn >> s.units_sold >> price;
	if (in)
	{
		s.revenue = s.units_sold * price;
	}
	else
	{
		s = Sales_item();
		return in;
	}
}