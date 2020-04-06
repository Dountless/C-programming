#include<stdio.h>
int main()
{
	unsigned int a=25;
	unsigned b=25;
	long unsigned c=345L;
	long signed d=345L;
	printf("a=%u b=%u\n",a,b);
	printf("c=%lu d=%ld\n",c,d);
	return 0;
}
