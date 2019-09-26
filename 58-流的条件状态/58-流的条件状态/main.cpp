#include <iostream>

using namespace std;

void check_cin_state(istream& is)
{
	if(is.bad())
		cout<<"cin bad()"<<endl;
	else
		cout<<"cin not bad()"<<endl;

	if(is.fail())
		cout<<"cin fail()"<<endl;
	else
		cout<<"cin not fail()"<<endl;

	//end of file 
	if(is.eof())
		cout<<"cin eof()"<<endl;
	else
		cout<<"cin not eof()"<<endl;

	if(is.good())
		cout<<"cin good()"<<endl;
	else
		cout<<"cin not good()"<<endl;
}

int main()
{
	cout<<"检查cin状态："<<endl;

	istream::iostate old_state = cin.rdstate();
	//获取流的状态，并保存下来使用
	cin.clear(old_state);//使用流后清除（还原）

	check_cin_state(cin);

	cout<<"请输入一个整数："<<endl;

	int n;
	cin>>n;

	cout<<"再检查一次cin的状态"<<endl;
	check_cin_state(cin);

	return 0;
}