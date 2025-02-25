// accept 5 marks and calculate average

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
}
