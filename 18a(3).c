#include<stdio.h>

float simpleinterest(int,int,int);

void main(){
	int p,n,r;
	float result;
	printf("enter a value of p &n & r");
	scanf("%d %d %d",&p,&n,&r);
	result = simpleinterest(p,n,r);
	
	printf("result=%f",result);
}
 float simpleinterest(int p,int n, int r){
 	float result;
 	result=(p*n*r)/100;
 	
 	return result;
 }
