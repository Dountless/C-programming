#include<stdio.h>
int main()
{
	double x,d=4.4;
	int i=2,y;
	x=(y=d/i)*2;
	printf("x=%lf y=%d\n",x,y);
	y=(x=d/i)*2;
	printf("x=%lf y=%d\n",x,y);
	return 0;
}
