#include <iostream>

using namespace std;

//   ������ѡ��
// argv:������������ѡ��ĸ���   avgv:�ַ�������,ÿһ��ѡ����һ���ַ���
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
	cout<<"������֮��Ϊ��"<<endl;
	cout<<(atof(argv[1])+atof(argv[2]))<<endl;

	return 0;
}