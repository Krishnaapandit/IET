#include<iostream>
using namespace std;
void show();
int main()
{
	show();
	show();
	show();

}
void show()
{
	static int y;
	cout<<y<<endl;  //here reintialize doesnt takes place therefore 012 is o/p
	y++;
}
