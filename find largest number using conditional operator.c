#include<stdio.h>

void main(){
	
	int a,b,c;
	printf("enter any three int number: ");
	scanf("%d %d %d",&a,&b,&c);
	
	(a>b)?((a>c)?printf("%d is the largest",a):printf("%d is the largest",c)):((b>c)?printf("%d is the largest",b):printf("%d is the largest",c));
	
	
}
