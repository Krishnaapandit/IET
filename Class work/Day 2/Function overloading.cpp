//constructor overloading or function overloading 
/*1)add(int a, int b)
add(double a, double b)*/

/*#include<iostream>
void add(int a, int b)
{
	std::cout<<"adittion of a and b is "<<(a+b)<<"\n";
}
void add(double a, double b)
{
	std::cout<<"adittion of a and b is "<<(a+b)<<"\n";
}

int main(){
	add(2,3);
	add(9.7,9.8);
}*/

/*2) add (int a, int b, int c)
add (int a, int b)*/

/*#include<iostream>
void add(int a, int b)
{
	std::cout<<"adittion of a and b is "<<(a+b)<<"\n";
}
void add(int a, int b, int c)
{
	std::cout<<"adittion of a and b is "<<(a+b)<<"\n";
}

int main(){
	add(2,3);
	add(5,6,7);
}*/

/*3) add(int a, double b)
add(double a, int b)*/
#include<iostream>
void add(int a, double b)
{
	std::cout<<"adittion of a and b is "<<(a+b)<<"\n";
}
void add(double a, int b)
{
	std::cout<<"adittion of a and b is "<<(a+b)<<"\n";
}

int main(){
	add(2,3.2);
	add(9.7,9);
}
