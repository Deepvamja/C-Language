#include<stdio.h>

void main(){
	
	int number,i=1,a=0;
	printf("number is prime or not: ");
	scanf("%d",&number);
	while(i<=number){
		if(number%i==0){
			a++;	
		}
		i++;
	}	if(a==2)
	printf("%d is prime number: ",number);
		else
		printf("%d is not prime number: ",number);
}
