#include<stdio.h>

void max(float,float,float);

void main(){
	float x,y,z;
	float result;
	printf("enter a value of x &y &z");
	scanf("%f %f %f",&x,&y,&z);
	max(x,y,z);
}

void max(float x,float y,float z){
       if(x>y){
       	if(x>z){
       		printf("%f",x);
		   }
		   else if (y>z){
		   	
		   	printf("%f",y);
		   }
		   	
		   	else{
		   		printf("%f",z);
			   }
		   	
		   }
		
			   }
		   
	   
