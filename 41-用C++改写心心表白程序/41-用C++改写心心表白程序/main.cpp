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
   cout<<"�Ƿ�Ը������ҵ����ģ�  [yes][no]"<<endl;

   string answer,answer2;
   cin>>answer;
  if ( !answer.empty()&& answer[0] != 'y')
  {
	cout<<"��ܾ����ң��Һ����ܣ�5555"<<endl;
	do
	{
		cout<<"��ѡ��һ�ΰ�(�ڴ���)"<<endl;
		cout<<"��Ҫ�پܾ�����"<<endl;
		cin>>answer2;
	}while(!answer2.empty()&& answer2[0] == 'n');
  }

  system("cls"); //����

  //����ʹ��forѭ����ӡ������
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
  cout<<"���㣬ôô��";

  //ѭ����ɫ
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
