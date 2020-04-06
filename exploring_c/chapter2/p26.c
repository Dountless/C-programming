#include<stdio.h>
int main()
{
	int x=100;
	if(!!x)
		printf("x=%d\n",!x);
	else
		printf("x=%d\n",x);
	return 0;
}
