#include <iostream>

using namespace std;

class Animal
{
public:
	Animal(int);
	virtual ~Animal(){cout<<"Animal的析构函数被调用"<<endl;}
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
	cout<<"Animal构造函数被调用\n";
}


class Mammal : public Animal
{
public:
	Mammal(int age):Animal(age)
	{
		cout<<"Mammal的构造函数被调用"<<endl;
	}
	virtual ~Mammal() {cout<<"Mammal构造函数被调用"<<endl;}

	//继承到了Animal里的所有纯虚函数
	//这里只重写一个,也就是还剩下四个纯虚函数，所以它也是抽象类
	virtual void Reproduce() const
	{
		cout<<"Mammal reproduction 被调用"<<endl;
	}
};

class Fish : public Animal
{
public:
	Fish(int age): Animal(age)
	{
		cout<<"Fish的构造函数被调用"<<endl;
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