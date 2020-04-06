#include<stdio.h>
int main()
{
	register float r=3.14;
	register double y=3.4;
	printf("r=%f y=%lf\n",r,y);
	return 0;
}
