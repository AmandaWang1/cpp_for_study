#include <iostream>
#include <vector>

using namespace std;

void ±éÀú (vector<int>::const_iterator begin,vector<int>::const_iterator end)
{
	while(begin!=end)
		cout<< *begin++ <<endl;
}

int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	±éÀú(a.begin(),a.end());

	return 0;
}