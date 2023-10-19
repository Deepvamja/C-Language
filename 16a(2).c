#include<stdio.h>

void main(){
	
	int a[3][3],i,j,ps=0,ng=0,zero=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter an array elements:");
			scanf("%d",&a[i][j]);
		}	
	}
			
		
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>0){
				ps++;
				
			}
			else if (a[i][j]==0){
				zero++;
			}
			
			else{
				ng++;
				
			}
				
		}
	}
	
	printf("%d\n",ng);
	printf("%d\n",ps);
	printf("%d\n",zero);
		
}

