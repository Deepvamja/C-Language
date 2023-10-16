#include<stdio.h>
void main(){
	int a[5],i,b[5],j,he=0,we=0;
	
	for(i=0;i<5;i++){
		printf("enter an height:");
		scanf("%d",&a[i]);
	}
	for (j=0;j<5;j++){
		printf("enter an weight:");
		scanf("%d",&b[j]);
	}
	
	for(i=0;i<5;i++){
		if (a[i]>170 && b[j]<50){
			he++;
		}
		
		
	}
	printf("%d person height greathan than 170 and person weight less than 50",he);
}
