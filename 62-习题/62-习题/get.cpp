#include "get.h"

std::istream& get(std::istream& in)
{
	int ival;

	while(in>>ival,!in.eof())
	{
		if(in.bad())
			throw std::runtime_error("IO stream corrupted");
		if(in.fail())
		{
			std::cerr<<"bad data,try again"<<std::endl;
			in.clear();
			in.ignore(200,'\n');
			continue;
		}
		std::cout<<"��������ݣ�"<<ival<<std::endl;
	}
	in.clear();

	return in;
}