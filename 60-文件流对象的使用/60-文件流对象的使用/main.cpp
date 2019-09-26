#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream outfile("test.txt");  //创建一个文件输出流
	outfile<<"hello!";
	outfile.close();//关闭

	ifstream infile("one.txt");  //创建一个文件输入流
	//或者替换为：
	string file("one.txt");   //用string保存文件名
	//ifstream infile(file.c_str());//注意：一定要用C风格的字符串

	//ifstream infile;  //流对象infile，没有和一个文件绑定
	//infile.open(file.c_str());//用open去绑定

	//if(infile) //打开文件成功
	if(!infile)   //打开文件失败
	{
		cerr<<"error:unable to open input file："<<file<<endl;
		return -1;
	}

	string s;
	while(infile>>s)  //从流里读对象
		cout<<s<<endl;
	infile.close();  //每次使用完都要把文件关闭
	infile.clear();   //恢复流的状态

	infile.open("two.txt");
	if(!infile)   //打开文件失败
	{
		cerr<<"error:unable to open input file："<<file<<endl;
		return -1;
	}

	while(infile>>s)  //从流里读对象
		cout<<s<<endl;
	infile.close();  //每次使用完都要把文件关闭

	//cout<<"读到的内容是："<<s<<endl;


	return 0;
}