#include<stdio.h>

void main(){
	
	int a,sum=0,count=0;
	float average;
	printf("enter 0 to stop: ");
	
	while(1){
		scanf("%d",&a);
		if(a==0){
			break;
		}
		count=count+1;
		sum=sum+a;
		
	}
	average=sum/count;
	printf("%.3f",average);
	
}
