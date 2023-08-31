#include<stdio.h>
void sum();
void main()
{
	sum()
}
void sum()
{ 
	int i=1, n,sum=0;
	printf("enter n number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
