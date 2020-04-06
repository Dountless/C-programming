#include<stdio.h>
int main()
{
	int x,y,z;
	x=y=z=1;
	z=++x&&++y&&++z;
	printf("x=%d\ny=%d\nz=%d\n",x,y,z);
	return 0;
}

