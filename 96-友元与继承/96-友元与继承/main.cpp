#include <iostream>

using namespace std;

class Base  //�Ұְ�
{
	friend class Frnd;
protected:
	int i;
};

class D1 : public Base //��
{
private:
	int j;
};

class Frnd //��ְ�
{
public:
	int mem(Base b)
	{
		return b.i;
	}
	
};

class D2 : public Frnd  //��
{

};

int main()
{

	return 0;
}