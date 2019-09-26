#include <iostream>
#include <string>

using namespace std;

//     ��¼
class Record    //����һ���������࣬�����ඨ�壬Ҳ��������
{
public:
	typedef std::size_t size;

	Record(): byte_count(0) 
	{}
	Record(size s) :byte_count(s)
	{}
	Record(std::string s) :name(s), byte_count(0)
	{}

	size get_count()  const
	{
		return byte_count;
	}
	std::string get_name()  const
	{
		return name;
	}

private:
	std::string name;  //��¼������
	size byte_count;   //��¼���ݵĶ���

};

int main()
{
	Record r;
	cout << "hello" << endl;

	return 0;
}