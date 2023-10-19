#include<stdio.h>

void main(){
	
	int n;
	printf("enter a size of array:");
	scanf("%d",&n);
	int a[n],i,count=0;
	for(i=0;i<n;i++){
		printf("enter a value of a[%d]",i);
		scanf("%d",&a[i]);
}
   int h=0,temp=0;
   printf("enter serach element:");
   scanf("%d",&h);
   
   for(i=0;i<n;i++){
   	
   	if(a[i]==h){
   		temp=1;
	   }
   	
   }
   
   if(temp==1){
   	printf("element found:");
   }
   
   else{
   	printf("element not found:");
   }
   
}
