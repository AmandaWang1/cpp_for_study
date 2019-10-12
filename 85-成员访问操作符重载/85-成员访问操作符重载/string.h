#ifndef _STRING_h
#define _STRING_H

class String
{
private:
	char *ptrChars;
public:
	String (char const *chars = "");
	String(String const &str);
	~String();

	void display() const;
};

#endif /*_STRING_H*/