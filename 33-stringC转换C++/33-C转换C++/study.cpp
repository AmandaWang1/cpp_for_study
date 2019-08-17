#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	/**** 把string转换成C风格 ****/
	string st ("hello world");
	st = st + " yayaya";
	cout<<st<<endl;
	const char *str  = st.c_str();  //把C++风格转换成C风格
	cout<<str<<endl;

	return 0;
}