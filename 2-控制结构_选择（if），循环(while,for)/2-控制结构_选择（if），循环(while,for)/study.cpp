#include <iostream>

int main()
{

/************************* if *****************************/

	int a,b;
	std::cout<<"请输入两个不相等的数 ："<<std::endl;
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

	std::cout<<"较大的数是："<<upper<<std::endl;
	std::cout<<"较小的数是："<<lower<<std::endl;


/************************* while *****************************/

	int c,d;
	std::cout<<"（while）再输入两个数："<<std::endl;
	std::cin>>c>>d;

	int sum=c;
	while(c<d)
	{
		c+=1;
		sum+=c;
	}

	std::cout<<"结果是："<<sum<<std::endl;

/*********************** for ****************************/

	int e,f;
	std::cout<<"（for）请输入两个数："<<std::endl;
	std::cin>>e>>f;
	int i;
	int su=0;
	for(int i=e;i<=f;++i)
	{
		su+=i;
	}
	std::cout<<"结果是："<<su<<std::endl;

	return 0;
}