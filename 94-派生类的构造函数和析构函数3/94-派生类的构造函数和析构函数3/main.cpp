#include <iostream>

using namespace std;

enum BREED
{
	GOLDEN,
	CAIRN,
	LALA,
	HAHAHA,
	SASASA
};

class Mammal
{
public:
	Mammal();
	~Mammal();

	int GetAge() const  //读年龄
	{
		return itsAge;   
	}

	void SetAge(int age)  //修改年龄
	{
		itsAge = age;
	}

	int Getweight() const  //读体重
	{
		return itsWeight;
	}

	void SetWeight(int weight)  //修改体重
	{
		itsWeight = weight;
	}

	void Speak() const
	{
		cout<<"Mammal 的声音！"<<endl;
	}

	void Sleep() const
	{
		cout<<"I am sleeping!"<<endl;
	}

private:
	int itsAge;
	int itsWeight;
};

Mammal::Mammal() : itsAge(3),itsWeight(5)
{
	cout<<"Mammal的构造函数正在被调用 "<<endl;
}

Mammal::~Mammal()
{
	cout<<"Mammal的析构函数正在被调用 "<<endl;
}
class Dog : public Mammal
{
private:
	BREED itsBreed;
public:
	Dog();
	~Dog();

	BREED GetBreed() const 
	{
		return itsBreed;
	}

	void SetBreed(BREED breed) 
	{
		itsBreed = breed;
	}

	void WagTail() const 
	{
		cout<<"Tail wagging..."<<endl;
	}

	void BegForFood() const
	{
		cout<<"Begging for food..."<<endl;
	}
};

Dog::Dog() : itsBreed(GOLDEN)
{
	cout<<"Dog的构造函数正在被调用 "<<endl;
}

Dog::~Dog()
{
	cout<<"Dog的析构函数正在被调用 "<<endl;
}

int main()
{
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	cout<<"Fido is "<<Fido.GetAge()<<"years old!"<<endl;

	return 0;
}