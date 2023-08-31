#include<stdio.h>

void main(){
	
	int x,y,z,p,q;
	float per;
	printf("enter an 5 sub marks:");
	scanf("%d %d %d %d %d",&x,&y,&z,&p,&q);
	
	per=(x+y+z+p+q)/5.0;
	
	if(per<35){
	printf("fail");
	}
	
	else if (per>=35 && per<45){
	printf("pass");
	}
	
	else if (per>=45 && per<60){
	printf("second");
	}
	
	else if (per>=60 && per<70){
	printf("first");
	}
	
	else if(per>=70){
	printf("distinction");
	}
}
