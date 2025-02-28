#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n;
	int *ptr, i;
	printf("Enter the no. of element:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("accept elements\n");
	for(i=0;i<n;i++)
	scanf("%d",(ptr+i));
	for(i=0;i<n;i++)
	ptr[i]=*(ptr+i)* i[ptr];
	printf("display elements\n");
	for(i=0;i<n;i++)
	printf("%d\t",*(ptr+i));
	free(ptr);
}
