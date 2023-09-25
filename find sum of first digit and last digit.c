#include<stdio.h>

void main(){
	
	int n,sum=0,firstdigit,lastdigit,reverse=0;
	
	printf("enter a number: ");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10){
	 reverse=((reverse*10)+n%10);
		n=n/10;
	   }
	 firstdigit=reverse%10;	
	
	sum=firstdigit+lastdigit;
	
	printf("sum of first digit and last digit = %d",sum);
	
}
