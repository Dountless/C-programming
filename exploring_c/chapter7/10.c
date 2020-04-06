#include<stdio.h>
#define CUBE(X) (X*X*X)
int main()
{
	int a,b;
	b=3;
	a=27/CUBE(3);
	printf("a=%d",a);
	return 0;
}
