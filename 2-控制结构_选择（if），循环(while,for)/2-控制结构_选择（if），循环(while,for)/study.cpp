#include <iostream>

int main()
{

/************************* if *****************************/

	int a,b;
	std::cout<<"��������������ȵ��� ��"<<std::endl;
	std::cin>>a>>b;

	int upper,lower;
	if(a>b)
	{
		upper=a;
		lower=b;
	}
	else
	{
		upper=b;
		lower=a;
	}

	std::cout<<"�ϴ�����ǣ�"<<upper<<std::endl;
	std::cout<<"��С�����ǣ�"<<lower<<std::endl;


/************************* while *****************************/

	int c,d;
	std::cout<<"��while����������������"<<std::endl;
	std::cin>>c>>d;

	int sum=c;
	while(c<d)
	{
		c+=1;
		sum+=c;
	}

	std::cout<<"����ǣ�"<<sum<<std::endl;

/*********************** for ****************************/

	int e,f;
	std::cout<<"��for����������������"<<std::endl;
	std::cin>>e>>f;
	int i;
	int su=0;
	for(int i=e;i<=f;++i)
	{
		su+=i;
	}
	std::cout<<"����ǣ�"<<su<<std::endl;

	return 0;
}