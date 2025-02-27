/*#include <stdio.h> 
#include<string.h>   
void main() { 
	char a[100]; 
//	char ch='a'; 
	int count=0; 
	int i=0; 
	printf("enter the string \n"); 
gets(a); 
while (a[i]!= '\0'){ 
	count++; 
	i++;
 } 
printf("the string is %s \n",a); 
printf("the no of character is %d \n",count); 

} */


/*include <stdio.h>
#include <string.h>
int main() {
    char a[40];
    printf("Enter the String :");
//    scanf("%s",a);
	gets(a);
    int x =strlen(a);
    printf ("Length of string : %d\n",x);
    int i=0;
	while(i<x-1){
	    	char temp = a[x-1];
	    	a[x-1]=a[i];
	    	a[i]=temp;
	    	i++;
	    	x--;
		}
	printf("Reversed String: %s", a);
}*/

//star program
#include<stdio.h>
#include<string.h>
int main()
{
	int row,col;
	for(row==1 ; row<=5; row++){
		for(col==3; col<=row; col++)
		{
			printf("* \tab");
		}
		printf("\n");
	}

}
