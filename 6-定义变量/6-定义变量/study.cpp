#include <iostream>
#include <string>
int main()
{
	int �й� = 1;
	std::cout<<�й�<<std::endl;
	printf("%d\n",�й�);

	/* ע�ⶨ���ַ����ķ�ʽ */

	std::string titleA = "���ѽ��";//���Ƴ�ʼ��
	std::string titleB ("���ѽ"); //ֱ�ӳ�ʼ��
	std::cout<<titleA<<std::endl;
	std::cout<<titleA<<std::endl;


	std::string number(10,'9');   //ע�����д��
	std::cout << number << std::endl;

	return 0;
}