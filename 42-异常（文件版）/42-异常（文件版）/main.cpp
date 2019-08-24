#include <stdio.h>

int my_cp(const char * src_file,const char * dest_file)
{
	FILE *in_file,*out_file;

	in_file = fopen(src_file,"rb");
	if(in_file == NULL)
	{
		return 1;
	}
	out_file = fopen(dest_file,"wb");
	if(out_file == NULL)
	{
		return 2;
	}

	char rec[256];
	size_t bytes_in,bytes_out;
	while((bytes_in = fread(rec,1,256,in_file))>0)
	{
		bytes_out = fwrite(rec,1,bytes_in,out_file);
		if(bytes_in != bytes_out)
		{
			return 3;
		}
	}
	fclose(in_file);
	fclose(out_file);

	return 0;
}

int my_cp2(const char * src_file,const char * dest_file)
{
	FILE *in_file,*out_file;

	in_file = fopen(src_file,"rb");
	if(in_file == NULL)
	{
		//return 1;
		throw 1;//throw�����׳��쳣
	}
	out_file = fopen(dest_file,"wb");
	if(out_file == NULL)
	{
		//return 2;
		throw 2;
	}

	char rec[256];
	size_t bytes_in,bytes_out;
	while((bytes_in = fread(rec,1,256,in_file))>0)
	{
		bytes_out = fwrite(rec,1,bytes_in,out_file);
		if(bytes_in != bytes_out)
		{
			//return 3;
			throw 3;
		}
	}
	fclose(in_file);
	fclose(out_file);

	//return 0;
}

int main()
{
	int result;
	if(result = my_cp("E:\\C++\\����\\4-�쳣����\\test1.txt","E:\\C++\\����\\4-�쳣����\\test2.txt")!=0)//���������ļ���
	{
		switch(result)
		{
		case 1:
			printf("��Դ�ļ�ʱ����\n");
			break;
		case 2:
			printf("��Ŀ���ļ�ʱ����\n");
			break;
		case 3:
			printf("�����ļ�ʱ����\n");
			break;
		default:
			printf("����δ֪����\n");
			break;

		}
	}

	try //ִ��ʱ�п��ܳ���Ĵ���ͷ���try��
	{
		my_cp("E:\\C++\\����\\4-�쳣����\\test1.txt","E:\\C++\\����\\4-�쳣����\\test2.txt");
	}
	catch(int e)
	{
		printf("�����쳣��%d\n",e);
	}

	printf("OK!\n");
}