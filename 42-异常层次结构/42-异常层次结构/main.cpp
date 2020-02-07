#include <iostream>

using namespace std;

const int DefaultSize = 10; //设置数组默认大小为10

//实现动态数组功能
class Array
{
public:
	Array(int itsSize = DefaultSize);
	~Array(){delete[] pType;}

	//下标运算符重载，一般两个一起做，一个常函数，一个非常函数
	int& operator[](int offSet); //非const用来写入
	const int& operator[](int offSet) const;//const用来读取

	//访问器
	int GetitsSize() const {return itsSize;}

	//异常类
	class xBoundary{};  //下标数据异常  用到了下标操作符重载里
	class xSize
	{
	public:
		xSize(){}
		xSize(int size):itsSize(size){}
		~xSize(){}
		int GetSize()
		{
			return itsSize;
		}
	private:
		int itsSize;
	};
	class xZero:public xSize{};    //构造函数里参数传0异常  用到了构造函数里
	class xNegative:public xSize{}; //构造函数里传负数异常
	class xTooSmall:public xSize{};
	class xTooBig:public xSize{};

private:
	int *pType;  //指针指向数组的第一个元素
	int itsSize;  //保存存储数组的多少

};

int& Array::operator[](int offSet)
{
	int size = this->GetitsSize(); //取出数组中元素的个数
	if(offSet >= 0&&offSet <size)  //如果下标是合法的
	{
		return pType[offSet];  //返回
	}
	throw xBoundary();  //否则，抛出异常
}

const int& Array::operator[](int offSet) const
{
	int size = this->GetitsSize(); //取出数组中元素的个数
	if(offSet >= 0&&offSet <size)  //如果下标是合法的
	{
		return pType[offSet];  //返回
	}
	throw xBoundary();  //否则，抛出异常
}

Array::Array(int size) : itsSize(size)
{

	if(size == 0)  //如果参数为0，抛出异常
		throw xZero();
	if(size<10)  //太小
		throw xTooSmall();
	if(size>30000)
		throw xTooBig();
	if(size<0)
		throw xNegative();


	pType = new int[size];   //用new动态创建一个数组,放到指针里
	for(int i = 0;i<size;i++)
	{
		pType[i] = 0;
	}
	
}
int main()
{
	Array a;  //构造函数没有传参数，默认是10
	Array b(12);

	Array intArray(20);


	try    //用try处理异常
	{
		//b[6];  //无异常
		//b[22]; //异常
		
		Array c(-100);

		for(int j = 0;j<100;j++)  //前面正常，后面发生异常
		{
			intArray[j] = j;
			cout<<"intArray["<<j<<"] okay"<<endl;
		}
	}

	//catch有顺序，写在前面的先执行
	catch(Array::xZero)
	{
		cout<<"下标不能是0"<<endl;
	}
	catch(Array::xBoundary)  //用catch捕获异常
	{
		cout<<"下标越界了"<<endl;
	}
	catch(Array::xNegative)
	{
		cout<<"下标不能是负数"<<endl;
	}
	catch(Array::xTooBig)
	{
		cout<<"下标不能大于30000"<<endl;
	}
	catch(Array::xTooSmall)
	{
		cout<<"下标不能小于10"<<endl;
	}

	catch(...)  //捕获剩余所有异常
	{
		cout<<"发生未知异常"<<endl;
	}
	
	return 0;
}