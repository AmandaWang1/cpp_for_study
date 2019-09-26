#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	//ofs是文件输出流对象
	ofstream ofs("test.txt");
	ofs<<"hello!"<<endl;
	ofs.close();

	//字符串输出流
	ostringstream oss;
	oss<<"hello!"<<endl;	
	cout<<"显示字符串流里面的字符串："<<oss.str()<<endl;

	ostringstream format_message;
	format_message<<"姓名： "<<"张飞"<<"\n"
				  <<"年龄："<< 22 <<"\n"
				  <<"体重："<< 88.5<<"\n";

	cout<<"显示张飞：\n"<<format_message.str()<<endl;   //.str()流里的字符串

	string dump;
	string 姓名;
	int 年龄;
	double 体重;

	istringstream input_istring (format_message.str());   //用输出字符串流里的字符串去初始化输入字符串流
	input_istring >> dump;  //扔掉“姓名:” （不用的就用这一行扔掉）
	input_istring >> 姓名;  //读到的是“张飞”这个姓名
	input_istring >> dump;
	input_istring >> 年龄;
	input_istring >> dump;
	input_istring >> 体重;
	 
	cout<<"读到的结果："<<endl;
	cout<< 姓名 <<endl;
	cout<< 年龄 <<endl;
	cout<< 体重 <<endl;
	
	return 0;
}
