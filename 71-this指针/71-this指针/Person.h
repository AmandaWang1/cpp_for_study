#ifndef _PERSON_H
#define _PERSON_H

#include <string>

class Person
{
public:
	Person(const std::string &nm, const std::string &addr)
	{
		this->name = nm;
		this->adress = addr;
	}

	std::string getName()  const
	{
		return this->name;  //������thisָ�����дҲ���Բ�д��һ���д�ɲ�д�Ķ�д�ϣ�
	}

	std::string getAdress() const
	{
		return this->adress;
	}

private:
	std::string name;
	std::string adress;
};

#endif // !_PERSON_H
