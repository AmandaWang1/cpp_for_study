#include <iostream>

using namespace std;

const int DefaultSize = 10; //��������Ĭ�ϴ�СΪ10

//ʵ�ֶ�̬���鹦��
class Array
{
public:
	Array(int itsSize = DefaultSize);
	~Array(){delete[] pType;}

	//�±���������أ�һ������һ������һ����������һ���ǳ�����
	int& operator[](int offSet); //��const����д��
	const int& operator[](int offSet) const;//const������ȡ

	//������
	int GetitsSize() const {return itsSize;}

	//�쳣��
	class xBoundary{};  //�±������쳣  �õ����±������������
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
	class xZero:public xSize{};    //���캯���������0�쳣  �õ��˹��캯����
	class xNegative:public xSize{}; //���캯���ﴫ�����쳣
	class xTooSmall:public xSize{};
	class xTooBig:public xSize{};

private:
	int *pType;  //ָ��ָ������ĵ�һ��Ԫ��
	int itsSize;  //����洢����Ķ���

};

int& Array::operator[](int offSet)
{
	int size = this->GetitsSize(); //ȡ��������Ԫ�صĸ���
	if(offSet >= 0&&offSet <size)  //����±��ǺϷ���
	{
		return pType[offSet];  //����
	}
	throw xBoundary();  //�����׳��쳣
}

const int& Array::operator[](int offSet) const
{
	int size = this->GetitsSize(); //ȡ��������Ԫ�صĸ���
	if(offSet >= 0&&offSet <size)  //����±��ǺϷ���
	{
		return pType[offSet];  //����
	}
	throw xBoundary();  //�����׳��쳣
}

Array::Array(int size) : itsSize(size)
{

	if(size == 0)  //�������Ϊ0���׳��쳣
		throw xZero();
	if(size<10)  //̫С
		throw xTooSmall();
	if(size>30000)
		throw xTooBig();
	if(size<0)
		throw xNegative();


	pType = new int[size];   //��new��̬����һ������,�ŵ�ָ����
	for(int i = 0;i<size;i++)
	{
		pType[i] = 0;
	}
	
}
int main()
{
	Array a;  //���캯��û�д�������Ĭ����10
	Array b(12);

	Array intArray(20);


	try    //��try�����쳣
	{
		//b[6];  //���쳣
		//b[22]; //�쳣
		
		Array c(-100);

		for(int j = 0;j<100;j++)  //ǰ�����������淢���쳣
		{
			intArray[j] = j;
			cout<<"intArray["<<j<<"] okay"<<endl;
		}
	}

	//catch��˳��д��ǰ�����ִ��
	catch(Array::xZero)
	{
		cout<<"�±겻����0"<<endl;
	}
	catch(Array::xBoundary)  //��catch�����쳣
	{
		cout<<"�±�Խ����"<<endl;
	}
	catch(Array::xNegative)
	{
		cout<<"�±겻���Ǹ���"<<endl;
	}
	catch(Array::xTooBig)
	{
		cout<<"�±겻�ܴ���30000"<<endl;
	}
	catch(Array::xTooSmall)
	{
		cout<<"�±겻��С��10"<<endl;
	}

	catch(...)  //����ʣ�������쳣
	{
		cout<<"����δ֪�쳣"<<endl;
	}
	
	return 0;
}