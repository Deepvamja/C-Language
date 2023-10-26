#include<stdio.h>

void main(){
	int n,i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d elements: \n",n);
	for  (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("elements in array:" );
	for(i=0;i<n;i++){
		printf("%d\n",*(arr + i ));
	}
}
