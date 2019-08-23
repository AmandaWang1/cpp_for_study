#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <process.h>

using namespace std;

int main()
{
   float y, x, z, f;
   long time;

   cout<<"balabalabalabal..........."<<endl;
   cout<<"是否愿意接受我的真心？  [yes][no]"<<endl;

   string answer,answer2;
   cin>>answer;
  if ( !answer.empty()&& answer[0] != 'y')
  {
	cout<<"你拒绝了我，我好难受，5555"<<endl;
	do
	{
		cout<<"再选择一次吧(期待脸)"<<endl;
		cout<<"不要再拒绝我了"<<endl;
		cin>>answer2;
	}while(!answer2.empty()&& answer2[0] == 'n');
  }

  system("cls"); //清屏

  //首先使用for循环打印出心形
  for (y = 1.5f; y > -1.5f; y -= 0.1f)
  {
    for (x = -1.5f; x < 1.5f; x += 0.05f)
    {
      z = x * x + y * y - 1;
      f = z * z * z - x * x * y * y * y;
	  cout<<(f <= 0.0f ? "*********"[(int)(f * -8.0f)] : ' ');
    }
     cout<<endl;
  }
  cout<<"爱你，么么哒";

  //循环变色
  for (;;)
  {
    system("color a");
    for (time = 0; time < 99999999; time++);
    system("color b");
    for (time = 0; time < 99999999; time++);
    system("color c");
    for (time = 0; time < 99999999; time++);
    system("color d");
    for (time = 0; time < 99999999; time++);
    system("color e");
    for (time = 0; time < 99999999; time++);
    system("color f");
    for (time = 0; time < 99999999; time++);
    system("color 0");
    for (time = 0; time < 99999999; time++);
    system("color 1");
    for (time = 0; time < 99999999; time++);
    system("color 2");
    for (time = 0; time < 99999999; time++);
    system("color 3");
    for (time = 0; time < 99999999; time++);
    system("color 4");
    for (time = 0; time < 99999999; time++);
    system("color 5");
    for (time = 0; time < 99999999; time++);
    system("color 6");
    for (time = 0; time < 99999999; time++);
    system("color 7");
    for (time = 0; time < 99999999; time++);
    system("color 8");
    for (time = 0; time < 99999999; time++);
    system("color 9");
  }

  return 0;
}
