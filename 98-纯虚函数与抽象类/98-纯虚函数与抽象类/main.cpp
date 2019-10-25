#include <iostream>

using namespace std;

//������Ǹ������࣬Ҳ�г����������ͣ�������һ������������
class Shape
{
public:
	Shape(){}
	virtual ~Shape(){}
	virtual double GetArea() = 0;  //���麯��
	virtual double GetPerim() = 0;
	virtual void Draw() = 0;
};

//��Ϊ����һ�����麯���������д�ɲ�д
#if 0
void Shape::Draw()
{
	cout<<"...";
}
#endif

class Circle : public Shape
{
public:
	Circle(int radius) : itsRadius(radius){}
	virtual ~Circle(){}

	double GetArea()  //���
	{
		return 3.14 * itsRadius * itsRadius;
	}
	double GetPerim() //�ܳ�
	{
		return 3.14 * 2 * itsRadius;
	}
	void Draw();
private:
	int itsRadius;
};

void Circle::Draw()
{
	cout<<"Circle drawing routine here!"<<endl;
}

class Rectangle : public Shape
{
public:
	Rectangle(int len,int width) : itsWidth(len),itsLength(width)
	{}
	virtual ~Rectangle()
	{}
	double GetArea()
	{
		return itsLength * itsWidth;
	}
	double GetPerim()
	{
		return 2*(itsWidth + itsLength);
	}
	virtual int GetLength()
	{
		return itsLength;
	}
	virtual int GetWidth()
	{
		return itsWidth;
	}
	void Draw();

private:
	int itsWidth;
	int itsLength;
};

void Rectangle::Draw()
{
	for(int i = 0;i<itsLength;i++)
	{
		for(int j = 0;j<itsWidth;j++)
		{
			cout<<"x";
		}
		cout<<endl;
	}
}

class Square : public Rectangle
{
public:
	Square(int len);
	Square(int len,int width);
	virtual ~Square() {}
	double GetPerim()
	{
		return 4*GetLength();
	}
};

Square::Square(int len) : Rectangle(len,len)
{}
Square::Square(int len,int width) : Rectangle(len,width)
{
	if(GetLength() != GetWidth())
	{
		cout<<"Error!"<<endl;
	}

}

int main()
{
	Circle a(8);
	a.Draw();
	cout<<endl;


	Rectangle b(10,5);
	b.Draw();



	return 0;
}