#include <iostream>

using namespace std;

class Canimal
{
public :
	virtual void speak() = 0;
};

class Ccat
{
public :
	void catchmouse() {cout<<"cat:I caught a mouse"<<endl;}
	void speak() {cout<<"cat:meow!"<<endl;}
};

class Cdog
{
public :
	void wagtail() {cout<<"dog:I wagged my tail."<<endl;}
	void speak() {cout<<"dog:woof!"<<endl;}
};

void DetermineType(Canimal* panimal)
{
	//运行时的类型转换

	Cdog* pdog = dynamic_cast<Cdog*>(panimal); 
	if(pdog)
	{
		cout<<"The animal is dog."<<endl;
		pdog->wagtail();
	}
	Ccat* pcat = dynamic_cast<Ccat*>(panimal);
	if(pcat)
	{
		cout<<"The animal is cat."<<endl;
		pcat->catchmouse();
	}

}

int main()
{

	return 0;
}