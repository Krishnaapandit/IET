// Copy Constructor Deep Copy
#include<iostream>
#include<string.h>
class stringss
{
	int len;
	char *ptr;
public:
	stringss(char*);
	void stringssdisplay();
	~stringss();
	stringss(stringss&);
};
void stringss::stringssdisplay()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
stringss::stringss(char * sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
stringss::~stringss()
{
	cout<<"destructor is called\n";
	if(ptr)
	{
		cout<<"destructor is called1\n";
	delete [] ptr;
	}
	cout<<"hello";
}
stringss::stringss(stringss & c)   //copy constructor
{
	this->len=c.len;
	this->ptr=new char[this->len+1];
	strcpy(this->ptr,c.ptr);
}
int main()
{	
	stringss c2("Arayan");
	c2.stringssdisplay();
	stringss c3(c2);
	c3.stringssdisplay();
}

