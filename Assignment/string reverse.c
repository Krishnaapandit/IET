#include<stdio.h>
int main(){
	char a[40];
	int i,x;
	char temp;
	printf("enter the string \n");
	gets(a);
	
	x =strlen(a);
	printf("the length of string is %d",x);
	
	while(i<x-1){
		temp=a[x-1];
		a[x-1]=a[i];
		a[i]=temp;
		i++;
		x--;
		
	}
	printf("reverse string is %s",a);
}
