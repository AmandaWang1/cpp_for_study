#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	//ofs���ļ����������
	ofstream ofs("test.txt");
	ofs<<"hello!"<<endl;
	ofs.close();

	//�ַ��������
	ostringstream oss;
	oss<<"hello!"<<endl;	
	cout<<"��ʾ�ַ�����������ַ�����"<<oss.str()<<endl;

	ostringstream format_message;
	format_message<<"������ "<<"�ŷ�"<<"\n"
				  <<"���䣺"<< 22 <<"\n"
				  <<"���أ�"<< 88.5<<"\n";

	cout<<"��ʾ�ŷɣ�\n"<<format_message.str()<<endl;   //.str()������ַ���

	string dump;
	string ����;
	int ����;
	double ����;

	istringstream input_istring (format_message.str());   //������ַ���������ַ���ȥ��ʼ�������ַ�����
	input_istring >> dump;  //�ӵ�������:�� �����õľ�����һ���ӵ���
	input_istring >> ����;  //�������ǡ��ŷɡ��������
	input_istring >> dump;
	input_istring >> ����;
	input_istring >> dump;
	input_istring >> ����;
	 
	cout<<"�����Ľ����"<<endl;
	cout<< ���� <<endl;
	cout<< ���� <<endl;
	cout<< ���� <<endl;
	
	return 0;
}
