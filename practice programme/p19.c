#include<stdio.h>
int main()
{
	int x=10,y=x,z=x;
	z=y=x;
	y-=x--;
	z-=--x;
	x-=--x-x--;



	printf("y=%d z=%d x=%d\n",y,z,x);
	return 0;
}
