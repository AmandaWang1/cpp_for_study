#include <iostream>

using namespace std;

int main()
{
	int sum = 0,value;

	cout<<"Please enter a number��"<<endl;

	//����һ���򵥵ķ���
	/*while(cin>>value)
	{
		sum += value;
		cout<<"Sum is "<<sum<<' ';
	}*/

	//���õķ���
	while(cin>>value , !cin.eof())
	{
		if(cin.bad())
			throw std::runtime_error("IO stream corrupted");  //�׳��쳣
		if(cin.fail())
		{
			cerr<<"bad data ,try again"<<endl;
			cin.clear();     //�ָ�����״̬
			cin.ignore(200,'\n');    //�����200���������\n
			continue;
		}
		sum += value;
		cout<<"Sum is "<<sum<<endl;
	}

	return 0;
}