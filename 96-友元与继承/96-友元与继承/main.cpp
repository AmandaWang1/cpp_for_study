#include <iostream>

using namespace std;

class Base  //ÎÒ°Ö°Ö
{
	friend class Frnd;
protected:
	int i;
};

class D1 : public Base //ÎÒ
{
private:
	int j;
};

class Frnd //Äã°Ö°Ö
{
public:
	int mem(Base b)
	{
		return b.i;
	}
	
};

class D2 : public Frnd  //Äã
{

};

int main()
{

	return 0;
}