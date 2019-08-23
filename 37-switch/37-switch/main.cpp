#include <iostream>

using namespace std;

int main()
{
	char ch;
	int anum = 0,eum = 0,inum = 0,onum = 0,unum = 0,other = 0;

	while(cin>>ch)
	{
		switch(ch)
		{
		case 'A':
		case 'a':
			++anum;
			break;
		case 'E':
		case 'e':
			++eum;
			break;
		case 'I':
		case 'i':
			++inum;
			break;
		case 'O':
		case 'o':
			++onum;
			break;
		case 'U':
		case 'u':
			++unum;
			break;
		default:
			++other;
			break;

		}
	}

	cout<<"Num of 'a' is "<<anum<<endl;
	cout<<"Num of 'e' is "<<eum<<endl;
	cout<<"Num of 'i' is "<<inum<<endl;
	cout<<"Num of 'o' is "<<onum<<endl;
	cout<<"Num of 'u' is "<<unum<<endl;
	cout<<"Num of others is "<<unum<<endl;

	return 0;
}