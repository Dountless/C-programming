#include<stdio.h>
#define AREA(x,y,z) x*y/z
int main()
{
	int a;
	a=AREA(10,20,40);
	printf("a=%d",a);
	return 0;
}
