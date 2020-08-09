#include<stdio.h>
#define CUBE(X) (X*X*X)	
int main()
{
	int a;
	a=27/CUBE(3);
	printf("%d\n",a);
	return 0;
}
