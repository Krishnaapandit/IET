//accept 2 no and add
/*#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("%d",c);
}*/

// calculating area off circlr

/*#include<stdio.h>

int main(){
	int radius;
	printf("enter the radius\n");
	scanf("%d",&radius);
	const float pi= 3.14;
	float area;
	
	area= pi*radius*radius;
	printf("area is %f ",area);
	
}*/

// accept 5 marks and calculate average
/*
#include<stdio.h>
int main(){
	
	int m1, m2,m3,m4,m5;
	int sum;
	float average;
	printf("accept 5 marks");
	
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	sum=m1+m2+m3+m4+m5;
	average= sum/5;
	printf("average is %f",average );
}*/

//ASCII conversion code

/*#include<stdio.h>
int main()
{
	printf("%c %d",'A'+2,'A'+2);
}
*/

/*
#include<stdio.h>
int main()
{
    char y = 'Y';
    char z = 'Z';
 
    printf("y = %c\n", y);//y=Y
    printf("z = %c\n",z);//z=Z
    printf("y + z = %d\n", y + z); //y+z=179
}*/

// if program

/*#include <stdio.h>
int main()
{
	int a;
	printf("enter the value of a \n");
	scanf("%d",&a);
	if(a!=0)
		printf("hello");
}*/

//largest number program using if else-if 

/*#include<stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Enter 3 values");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b&&a>c){
		printf("%d is greatest",a);
	}
	else if(b>c&&b>c){
		printf("%d is greatest",b);
	}
	else
		printf("%d is largest",c);
}*/

/*
#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter the number");
	scanf("%d",&num);
	
	if(num%2==0)
		printf("Even no");
	else
		printf("odd no");
}*/

//vowels checking

/*#include<stdio.h>

int main(){
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		printf("%c is vowel",ch);
	else
		printf("%c is not vowel",ch);	
}*/

// Grades of students

/*#include<stdio.h>

int main(){
	
	int marks;
	printf("Enter the marks");
	scanf("%d",&marks);
	
	if(marks>=80 && marks<=100)
		printf("u scored A grade");
	
	if(marks>=60 && marks<80)
		printf("u scored B grade");
	
	if(marks>=35 && marks<60)
		printf("u scored C grade");
	
	if(marks<35)
		printf("u scored F grade");
}*/

// Conditional operator
/*#include<stdio.h>

int main(){
	int a, b, max;
	printf("Enter the value");
	 
	scanf("%d%d",&a,&b);
	 
	max = (a>b)?a:b;
	
	printf("%d is max",max);
}*/

