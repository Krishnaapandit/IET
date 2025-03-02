#include<stdio.h>
int main(){
	char a[40];
	int i;
	int count=0;
	printf("enter the string \n");
	gets(a);
	while (a[i]!='\0'){
		count++;
		i++;
	}
	printf("no of string is %d \n", count);
}
