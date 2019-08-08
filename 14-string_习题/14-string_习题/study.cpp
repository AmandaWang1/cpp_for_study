/*  题目1：											   *
	编写程序读入两个string对象，测试他们是否相等   
 *  若不相等，比较他们的大小						   */

/*  题目2：											   *
	编写程序读入两个string对象，测试他们长度是否相等   
 *  若不相等，比较他们中哪个较长                       */


#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2;
	cin>>s1>>s2;

/************* 题目1 ************/
	/*if( s1==s2 )
		cout<<"\""<<s1<<"\"与"<<"\""<<s2<<"\"相等"<<endl;
	else
	{
		if(s1>s2)
			cout<<"\""<<s1<<"\"比"<<"\""<<s2<<"\"大"<<endl;
		else
			cout<<"\""<<s2<<"\"比"<<"\""<<s1<<"\"大"<<endl;
	}*/

/************ 题目2 *************/
	if(s1.size() == s2.size())
	{
		cout<<"\""<<s1<<"\"与"<<"\""<<s2<<"\"长度相等"<<endl;
	//	cout<<s1<<"\ 与"<<s2<<"\ 长度相等"<<endl;
	}
	else
	{
		if(s1.size() > s2.size())
			cout<<"\""<<s1<<"\"比"<<"\""<<s2<<"\"长"<<endl;
		else
			cout<<"\""<<s2<<"\"比"<<"\""<<s1<<"\"长"<<endl;
	}

	return 0;
}
