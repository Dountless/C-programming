#include<stdio.h>
int main()
{
	int x=10,y,z;
	z=y=x;
	y-= x--;
	z-= --x;
	x-=--x-x--;
	printf("y=%d\nz=%d\nx=%d\n",y,z,x);
	return 0;
}

