#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string s;
	//ifstream ifs("file1.txt",ifstream::in);
	ifstream ifs("file1.txt");  //�ļ�������Ĭ��ģʽΪ����
	ifs>>s;
	ifs.close();
	cout<<s<<endl;

	/* ������һ����Ϊfile2���ļ����������ַ��� */
	//ofstream ofs("file2.txt",ofstream::out);
	ofstream ofs("file2.txt");   //�ļ������Ĭ��ģʽΪ���
	ofs<<"Hello file2 !"<<endl;
	ofs.close();

	/* ��file4���������滻���� */
	ofstream ofs4 ("file4.txt",ofstream::out | ofstream::trunc);
	ofs4<<"Hello file4 !"<<endl;
	ofs.close();

	/* ��file5��������������� */
	ofstream ofs5 ("file5.txt",ofstream::out | ofstream::app );
	ofs5<<"Hello file5 !"<<endl;
	ofs.close();

	//fstream fs("file4.txt");
	fstream fs("file4.txt",fstream::in | fstream::out);   //����һ��д�������ͬ
	fs>>s;
	fs.close();
	cout<<s;

	return 0;
}