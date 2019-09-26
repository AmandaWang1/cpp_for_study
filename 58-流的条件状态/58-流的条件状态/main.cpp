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
	cout<<"���cin״̬��"<<endl;

	istream::iostate old_state = cin.rdstate();
	//��ȡ����״̬������������ʹ��
	cin.clear(old_state);//ʹ�������������ԭ��

	check_cin_state(cin);

	cout<<"������һ��������"<<endl;

	int n;
	cin>>n;

	cout<<"�ټ��һ��cin��״̬"<<endl;
	check_cin_state(cin);

	return 0;
}