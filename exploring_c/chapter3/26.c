#include<stdio.h>
int main()
{
	int x=10,y=x,z=x,t;
	y-=x;
	z= -x;
	t=-x;
	printf("y=%d\nz=%d\nt=%d\n",y,z,t);
	return 0;
}

