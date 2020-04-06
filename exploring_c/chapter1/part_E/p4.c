#include<stdio.h>
int main()
{
	int d,w,r;
	d=31+29+31+30+31;
	w=d/7;
	r=d%7;
	printf("no. of days:%d\nweeks:%d\nremaining days:%d\n",d,w,r);
	return 0;
}
