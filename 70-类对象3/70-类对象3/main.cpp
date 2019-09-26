#include <iostream>
#include <string>

using namespace std;

//     记录
class Record    //这是一个完整的类，即是类定义，也是类声明
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
	std::string name;  //记录的名称
	size byte_count;   //记录数据的多少

};

int main()
{
	Record r;
	cout << "hello" << endl;

	return 0;
}