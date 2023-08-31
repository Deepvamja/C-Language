#include<stdio.h>
void main(){
	int  a,b;
	char c;
	
    printf("enter an char value:");
    scanf("%c",&c);
    
	printf("enter an int value:");
	scanf("%d",&a);

    printf("enter an int value:");
    scanf("%d",&b);
    
    
    if (c=='+'){
    	printf("%d",c=a+b);
	}
	
	if (c=='-'){
		printf("%d",c=a-b);
	}
     
    if (c=='*'){
    	printf("%d",c=a*b);
	}
	
	if (c=='/'){
	   printf("%d",c=a/b);
	}
	
	printf("answer=%d",c);
}
