#include<stdio.h>

void main(){
	
	int n;
	printf("enter a size of array:");
	scanf("%d",&n);
	int a[n],i,max=0,min=345,sum=0;
	float ave=0;
	for(i=0;i<n;i++){

		printf("enter a value of a[%d]:",i);
		scanf("%d",&a[i]);
		
		if(a[i]>max){
			max = a[i];
		}if(min>a[i]){
			min=a[i];
		}
		
			
		
	
		
		
		sum+= a[i];
	}
		ave=sum/n;
	
	printf("sum = %d\nave = %f\nmax = %d\nmin =%d",sum,ave,max,min);
}

   

