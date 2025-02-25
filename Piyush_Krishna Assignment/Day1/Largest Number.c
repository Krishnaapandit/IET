//largest number program using if else-if 

#include<stdio.h>

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
}
