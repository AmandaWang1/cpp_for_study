#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	/**** ��stringת����C��� ****/
	string st ("hello world");
	st = st + " yayaya";
	cout<<st<<endl;
	const char *str  = st.c_str();  //��C++���ת����C���
	cout<<str<<endl;

	return 0;
}