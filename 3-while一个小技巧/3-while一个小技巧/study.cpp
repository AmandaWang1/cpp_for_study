#include <iostream>

int main()
{
	int a;
	int sum=0;		 
	while(std::cin>>a)//��������ʱ�ͼ���ѭ����û������ʱ��ֹͣѭ��
		sum+=a;		  //ctrl+z ��ʾ����

	std::cout<<"��Щ���ֵĺ�Ϊ"<<sum<<std::endl;

	return 0;
}