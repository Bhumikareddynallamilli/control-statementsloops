#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int: %hd to %hd\n",SHRT_MIN, SHRT_MAX);
	printf("signed int: %d to %d\n", INT_MIN, INT_MAX);
	printf("long int: %ld to %ld\n",LONG_MIN, LONG_MAX);
	printf("long long int: %lld to %lld",LLONG_MIN, LLONG_MAX);
}
