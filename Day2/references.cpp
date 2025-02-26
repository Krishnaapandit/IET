// References
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int &y=x;
	int &z=x;
	cout<<x<<" "<<y<<"\n";
	x=125;
	cout<<x<<" "<<y<<"\n";
	cout<<&x<<" "<<&y<<"\n";
	cout<<z;
	
}
