class U_ptr
{
public:
private:

};

class BHasPtr
{
public:
	BHasPtr(int *p, int i) :ptr(new U_Ptr(p)), val(i)
	{}
	int *get_ptr() const
	{
		return ptr;
	}
	int get_int() const
	{
		return val;
	}

	void set_ptr(int *p)
	{
		ptr = p;
	}
	void set_int(int i)
	{
		val = i;
	}

	int get_ptr_val() const
	{
		return *ptr;   //����ָ����ָ��Ķ���
	}
	void set_ptr_val(int val) const
	{
		*ptr = val;
	}
private:
	int val;
	//int *ptr;
	U_Ptr *ptr;

};

