#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
	int m,x=5,y=6;
	m=MAX(x+y,10);
	printf("%d\n",m);
	m=MAX(x,y)*100;
	printf("%d\n",m);
	return 0;
}
