#include<stdio.h>
int message();
int main()
{
	int c=0;
	printf("c before call=%d\n",c);
	c=message();//garbage value contain
	printf("c after call %d",c);
	
	return 0;
}
int message()
{
	printf("deepak verma\n ");
}

