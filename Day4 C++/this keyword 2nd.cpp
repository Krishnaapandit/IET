// this keyword
#include<iostream>
using namespace std;
class student
{
	int a,b;
public:
	student(int p,int q)
{
	this->a=p;
	this->b=q;

}
void display()
{
	cout<<a<<"\n"<<b;
}
};
int main()
{
	student s(10,40);
	cout<<&s<<endl;

}
