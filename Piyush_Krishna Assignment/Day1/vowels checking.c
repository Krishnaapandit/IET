//vowels checking

#include<stdio.h>

int main(){
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		printf("%c is vowel",ch);
	else
		printf("%c is not vowel",ch);	
}
