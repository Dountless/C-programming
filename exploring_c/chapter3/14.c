#include<stdio.h>
int main()
{
	int x=3,y,z;
	z=y=x;
	z=y+=x= -z;
	printf("x=%d\ny=%d\nz=%d\n",x,y,z);
	return 0;
}
