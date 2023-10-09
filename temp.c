#include<stdio.h>

int main(){
	
	int i,j,n;
	float e=1.0,nfact = 1.0;
	printf("enter your number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			nfact *=j;
		}
		e = e + (1.0/nfact);
	}
	printf(" %f",e);
	return 0;
}
