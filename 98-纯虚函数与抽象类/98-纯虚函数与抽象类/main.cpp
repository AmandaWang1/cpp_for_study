#include <iostream>

using namespace std;

//这个类是个抽象类，也叫抽象数据类型，至少有一个或多个抽象函数
class Shape
{
public:
	Shape(){}
	virtual ~Shape(){}
	virtual double GetArea() = 0;  //纯虚函数
	virtual double GetPerim() = 0;
	virtual void Draw() = 0;
};

//因为这是一个纯虚函数，定义可写可不写
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

	double GetArea()  //面积
	{
		return 3.14 * itsRadius * itsRadius;
	}
	double GetPerim() //周长
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