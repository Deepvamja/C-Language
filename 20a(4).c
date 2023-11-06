#include<stdio.h>

struct student{
	char name[40];
	float percentage;
	int age;
	
	
};

void main(){
	
	int i;
	struct student st;
	for(i=0;i<5;i++){
		printf("Enter name:");
		scanf("%s",st.name);
		printf("enter percentage:");
		scanf("%f",&st.percentage);
		printf("enter age:");
		scanf("%d",&st.age);
	}
	
for(i=0;i<5;i++){
	printf("name: %s",st.name);
	printf("percentage: %f",st.percentage);
	printf("age: %d",st.age);
}
}
