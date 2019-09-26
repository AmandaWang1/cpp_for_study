#ifndef _PERSON_H
#define _PERSON_H

#include <string>

class Person
{
public:
	explicit Person(const std::string &nm, int a) :name(nm), age(a)
	{
	}
public:
	std::string name;
	int age;
};

#endif /*_PERSON_H*/