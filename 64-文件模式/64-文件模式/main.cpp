#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string s;
	//ifstream ifs("file1.txt",ifstream::in);
	ifstream ifs("file1.txt");  //文件输入流默认模式为输入
	ifs>>s;
	ifs.close();
	cout<<s<<endl;

	/* 创建了一个名为file2的文件，并输入字符串 */
	//ofstream ofs("file2.txt",ofstream::out);
	ofstream ofs("file2.txt");   //文件输出流默认模式为输出
	ofs<<"Hello file2 !"<<endl;
	ofs.close();

	/* 打开file4并向其中替换内容 */
	ofstream ofs4 ("file4.txt",ofstream::out | ofstream::trunc);
	ofs4<<"Hello file4 !"<<endl;
	ofs.close();

	/* 打开file5并向其中添加内容 */
	ofstream ofs5 ("file5.txt",ofstream::out | ofstream::app );
	ofs5<<"Hello file5 !"<<endl;
	ofs.close();

	//fstream fs("file4.txt");
	fstream fs("file4.txt",fstream::in | fstream::out);   //与上一行写法表达相同
	fs>>s;
	fs.close();
	cout<<s;

	return 0;
}