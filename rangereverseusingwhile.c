#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	while(a>=b)
	{
		printf("%d",a);
		a--;
	}
	
}
