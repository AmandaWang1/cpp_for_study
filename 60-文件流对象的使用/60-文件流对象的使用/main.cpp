#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream outfile("test.txt");  //����һ���ļ������
	outfile<<"hello!";
	outfile.close();//�ر�

	ifstream infile("one.txt");  //����һ���ļ�������
	//�����滻Ϊ��
	string file("one.txt");   //��string�����ļ���
	//ifstream infile(file.c_str());//ע�⣺һ��Ҫ��C�����ַ���

	//ifstream infile;  //������infile��û�к�һ���ļ���
	//infile.open(file.c_str());//��openȥ��

	//if(infile) //���ļ��ɹ�
	if(!infile)   //���ļ�ʧ��
	{
		cerr<<"error:unable to open input file��"<<file<<endl;
		return -1;
	}

	string s;
	while(infile>>s)  //�����������
		cout<<s<<endl;
	infile.close();  //ÿ��ʹ���궼Ҫ���ļ��ر�
	infile.clear();   //�ָ�����״̬

	infile.open("two.txt");
	if(!infile)   //���ļ�ʧ��
	{
		cerr<<"error:unable to open input file��"<<file<<endl;
		return -1;
	}

	while(infile>>s)  //�����������
		cout<<s<<endl;
	infile.close();  //ÿ��ʹ���궼Ҫ���ļ��ر�

	//cout<<"�����������ǣ�"<<s<<endl;


	return 0;
}