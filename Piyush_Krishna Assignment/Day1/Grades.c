// Grades of students

#include<stdio.h>

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
}
