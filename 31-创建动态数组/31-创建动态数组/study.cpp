#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"����Ҫ���������飺"<<endl;
	cin>>n;

	/********** C���Ե�malloc ��free ************/
	int *p = (int *)malloc(n*sizeof(int));
	if(p!=NULL)
		cout<<"C���Դ�����̬����ɹ�"<<endl;
	free(p);  //�ͷ�����

	/**************** C++��new ��delete ******************/
	int *pp = new int[n];
	if(pp!=NULL)
		cout<<"C++������̬����ɹ�"<<endl;
	delete[] pp; //�ͷ�����



	return 0;
}