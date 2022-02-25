#include<stdio.h>
#include<math.h>
void main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1; i<=sqrt(n);i++)
	{
		if(n%i ==0)
		{
			printf("%d %d\n",i,n/i);
		}
	}
}
