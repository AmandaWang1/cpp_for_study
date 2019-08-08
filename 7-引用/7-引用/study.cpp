#include <iostream>

int main()
{
	/* ��ͨ���ã�& */
	std::cout<<"��ͨ����"<<std::endl;
	int a(3);
	int &b(a);
	std::cout<<a<<std::endl;
	std::cout<<b<<std::endl;

	std::cout<<std::endl;

	/* const ����1 */
	std::cout<<"const����1"<<std::endl;
	const int c = 1;
	const int &d = c;
	std::cout<<c<<std::endl;
	std::cout<<d<<std::endl;

	std::cout<<std::endl;

	/* const ����2 */
	int f = 2;
	const int &g = f;
	const int &h = g+2;
	std::cout<<f<<std::endl;
	std::cout<<g<<std::endl;
	std::cout<<h<<std::endl;

	std::cout<<std::endl;

	/* const ����3 */
	double i = 3.14;
	const double &l = i;
	const int &j = i;
	const double &k = j;
	std::cout<<i<<std::endl;
	std::cout<<l<<std::endl;
	std::cout<<j<<std::endl;
	std::cout<<k<<std::endl;

	return 0;
}