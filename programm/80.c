#include<stdio.h>
int main()
{
	double x,d=5.0;

	int y;
	x=d*(x=2.5/d);
	printf("x=%lf\n",x);
	x=d*(y=(int)2.5+1.5);
	printf("x=%lf y=%d\n",x,y);
	return 0;
}
	
