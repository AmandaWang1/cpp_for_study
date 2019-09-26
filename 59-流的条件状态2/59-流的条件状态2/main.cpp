#include <iostream>

using namespace std;

int main()
{
	int sum = 0,value;

	cout<<"Please enter a number："<<endl;

	//这是一个简单的方法
	/*while(cin>>value)
	{
		sum += value;
		cout<<"Sum is "<<sum<<' ';
	}*/

	//更好的方法
	while(cin>>value , !cin.eof())
	{
		if(cin.bad())
			throw std::runtime_error("IO stream corrupted");  //抛出异常
		if(cin.fail())
		{
			cerr<<"bad data ,try again"<<endl;
			cin.clear();     //恢复流的状态
			cin.ignore(200,'\n');    //清除到200个或清楚到\n
			continue;
		}
		sum += value;
		cout<<"Sum is "<<sum<<endl;
	}

	return 0;
}