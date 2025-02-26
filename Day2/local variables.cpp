//Global variable
/*#include<iostream>
using namespace std;
void show();
int z=100;
int main()
{
	cout<<z<<endl;
	z++;
	show();
	cout<<z<<endl;
	return 0;	
}
void show()
{
	cout<<z<<endl;
	int z=0;  // here there is int therefore int z is a local variable
	cout<<z<<endl;
	z++;
	cout<<z<<endl;
}*/



//Global variable
#include<iostream>
using namespace std;
void show();
int z=100;
int main()
{
	cout<<z<<endl;
	z++;
	show();
	cout<<z<<endl;
	return 0;	
}
void show()
{
	cout<<z<<endl;
	z=0; //here there is no int therefore considered as global variable
	cout<<z<<endl;
	z++;
	cout<<z<<endl;
}
