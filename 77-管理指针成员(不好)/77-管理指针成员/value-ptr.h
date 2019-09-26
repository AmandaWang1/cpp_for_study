//深复制
class CHasPtr
{
public:
	CHasPtr(const int &p, int i) :ptr(new int (p)), val(i)
	{}
	CHasPtr(const CHasPtr &orig) :ptr(new int(*orig.ptr)),val(orig.val)  //复制构造函数
	{}
	CHasPtr& operator=(const CHasPtr&);	//赋值操作符

	~CHasPtr()
	{
		delete ptr;
	}

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
		return *ptr;   //返回指针所指向的对象
	}
	void set_ptr_val(int val) const
	{
		*ptr = val;
	}
private:
	int val;
	int *ptr;

};

CHasPtr& CHasPtr::operator = (const CHasPtr &rhs)
{
	*ptr = *rhs.ptr;   //通过指针把指针所指向的对象复制出来，不是简单的复制指针的地址
	val = rhs.val;
	return *this;
}