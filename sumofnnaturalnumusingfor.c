#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("enter num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
