// calculating area off circle
#include<stdio.h>

int main(){
	int radius;
	printf("enter the radius\n");
	scanf("%d",&radius);
	const float pi= 3.14;
	float area;
	
	area= pi*radius*radius;
	printf("area is %f ",area);
	
}

