#include<stdio.h>
int main()
{
	int k=-2,j=4;
	switch(k/=j/k)
	{
		default:
			printf("all are same\n");
		case 0:
			printf("happy birthday\n");
		case 1:
			printf("a unch on a mouth\n");
		case 2:
			printf("a kick in the back\n");
	}
	return 0;
}
