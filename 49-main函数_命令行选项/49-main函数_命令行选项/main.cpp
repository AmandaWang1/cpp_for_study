#include <iostream>

using namespace std;

//   命令行选项
// argv:用来做命令行选项的个数   avgv:字符串数组,每一个选项是一个字符串
int main(int argc,char **argv)
{
	/*cout<<argv[0]<<endl;
	cout<<argv[1]<<endl;
	cout<<argv[2]<<endl;	*/ 

	if(argc != 3)
	{
		cout<<"You should use three arguments!!!"<<endl;
		return -1;
	}
	cout<<"这两数之和为："<<endl;
	cout<<(atof(argv[1])+atof(argv[2]))<<endl;

	return 0;
}