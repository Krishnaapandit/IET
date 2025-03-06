//scope of an object
#include<iostream>
using namespace std;
class exam
{
	public:
	exam()
	{
		cout<<"constructor is invoked \n";
	}
	~exam()
	{
		cout<<"destructor is invoked \n";
	}
};
exam e1;
int main()
{
	cout<<"main begins \n";
	exam e2;
	{
		cout<<"block begins \n"<<endl;
		exam e3;
		cout<<"block ends \n"<<endl;
	}
	cout<<"main ends \n"<<endl;
}

