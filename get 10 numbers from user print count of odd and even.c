#include<stdio.h>

int main(){
	
	int i=1,even=0,odd=0;
	while(i<=10){
		if(i%2==0){
			even=even+1;
		}
		else{
			odd=odd+1;
		}
		i++;
	}
	printf("%d\n",even);
	printf("%d",odd);
	return 0;
	
}
