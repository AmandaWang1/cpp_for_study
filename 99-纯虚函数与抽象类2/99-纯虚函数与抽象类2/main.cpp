#include <iostream>

using namespace std;

class Animal
{
public:
	Animal(int);
	virtual ~Animal(){cout<<"Animal����������������"<<endl;}
	virtual int GetAge() const {return itsAge;}
	virtual void SetAge(int age){itsAge = age;}
	virtual void Sleep() const = 0;
	virtual void Eat() const = 0;
	virtual void Reproduce() const = 0;
	virtual void Move() const = 0;
	virtual void Speak() const = 0;

private:
	int itsAge;
};

Animal::Animal(int age):itsAge(age)
{
	cout<<"Animal���캯��������\n";
}


class Mammal : public Animal
{
public:
	Mammal(int age):Animal(age)
	{
		cout<<"Mammal�Ĺ��캯��������"<<endl;
	}
	virtual ~Mammal() {cout<<"Mammal���캯��������"<<endl;}

	//�̳е���Animal������д��麯��
	//����ֻ��дһ��,Ҳ���ǻ�ʣ���ĸ����麯����������Ҳ�ǳ�����
	virtual void Reproduce() const
	{
		cout<<"Mammal reproduction ������"<<endl;
	}
};

class Fish : public Animal
{
public:
	Fish(int age): Animal(age)
	{
		cout<<"Fish�Ĺ��캯��������"<<endl;
	}
	virtual ~Fish()
	{}
	//sleep
	//eat
	//
	//
};

class Horse : public Mammal
{};

class Dog : public Mammal
{};

int main()
{

	return 0;
} 