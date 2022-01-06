#include<stdio.h>
void main()
{
	int num,i,product;
	printf("enter num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		product=product*i;
	}
	printf("%d",product);
}
