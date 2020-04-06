#include<stdio.h>
#include<stdlib.h>
#define E exit(0)
int main()
{
	int i=4;
	if(i<=5)
		E;
	else
		printf("get out anyway!\n");
	printf("well!\n");
	return 0;
}
