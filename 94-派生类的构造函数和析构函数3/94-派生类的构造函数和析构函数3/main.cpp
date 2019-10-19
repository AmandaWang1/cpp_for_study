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

	int GetAge() const  //������
	{
		return itsAge;   
	}

	void SetAge(int age)  //�޸�����
	{
		itsAge = age;
	}

	int Getweight() const  //������
	{
		return itsWeight;
	}

	void SetWeight(int weight)  //�޸�����
	{
		itsWeight = weight;
	}

	void Speak() const
	{
		cout<<"Mammal ��������"<<endl;
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
	cout<<"Mammal�Ĺ��캯�����ڱ����� "<<endl;
}

Mammal::~Mammal()
{
	cout<<"Mammal�������������ڱ����� "<<endl;
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
	cout<<"Dog�Ĺ��캯�����ڱ����� "<<endl;
}

Dog::~Dog()
{
	cout<<"Dog�������������ڱ����� "<<endl;
}

int main()
{
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	cout<<"Fido is "<<Fido.GetAge()<<"years old!"<<endl;

	return 0;
}