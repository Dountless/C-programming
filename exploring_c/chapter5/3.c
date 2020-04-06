#include<stdio.h>
int message();
int main()
{
	int c=0;
	printf("cbefore call=%d\n",c);
	c=message();
	printf("c after call=%d\n",c);
	return 0;
}
int message()
{
	printf("live and let \n");
}
