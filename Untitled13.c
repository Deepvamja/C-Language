#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("enter an value of a:");
	scanf("%d",&a);
	
	printf("enter an value of b:");
	scanf("%d",&b);
	
	a=a+b,b=a-b,a=a-b;
	
	printf("a=%d b=%d", a,b);
	return 0;
}
