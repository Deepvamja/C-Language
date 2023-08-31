#include<stdio.h>

void main(){
	
	char ch;
	printf("enter an char val: ");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch>='z'){
	  printf("uppercase");
	}
	
	else if (ch>='a' && ch>='z'){
	   printf("lowercase");
	}
	
	 else if(ch>=0 && ch>=9){
	 	printf("digits"); 
}
     else{
     	printf("special symbols");
	 }
	
	 

	
}
