#include<stdio.h>

void main(){
	int l,m,row,column;
	printf("enter a value of row: ");
	scanf("%d",&row);
	printf("enter a value of column: ");
	scanf("%d",&column);
	
	int arr[row][column];
	for(l=0;l<row;l++){
		for(m=0;m<column;m++){
			printf("%d %d",l,m);
			scanf("%d",&arr[l][m]);
		}
	}
	for(l=0;l<row;l++){
		for(m=0;m<column;m++){
			printf("%d",arr[l][m]);
			
		}
		printf("\n");
				
    }	

}
