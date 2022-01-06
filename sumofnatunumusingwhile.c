#include<stdio.h>
void main()
{
	int a,b,sum=0;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
		printf("%d",a,b);
		a++;
	}
	{
		sum=sum+a;
	}
	printf("%d",sum);
}
