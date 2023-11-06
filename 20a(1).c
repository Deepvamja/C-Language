#include<stdio.h>

struct employee{
	int d1;
	int j1;
};
  
  void main(){
  	struct employee emp;
  	
  	printf("enter date of birth:");
  	scanf("%d",&emp.d1);
  	printf("enter date of joining:");
  	scanf("%d",&emp.j1);
  	printf("dob",emp.d1);
  	printf("jod",emp.j1);
  }
