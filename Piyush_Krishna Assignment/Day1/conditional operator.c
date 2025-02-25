// Conditional operator
#include<stdio.h>

int main(){
	int a, b, max;
	printf("Enter the value");
	 
	scanf("%d%d",&a,&b);
	 
	max = (a>b)?a:b;
	
	printf("%d is max",max);
}
